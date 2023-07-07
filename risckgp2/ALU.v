`timescale 1ns/1ps

module ALU(input signed[31:0] in1, input signed[31:0] in2, input ALUSw, input[3:0] ALUOp, output reg sign, output reg zero, output reg carry, output reg[31:0] result);
	wire[31:0] addOut, andOut, xorOut, shiftOut, diffOut, compOut, lsOut, tempNeg, fmuxOut, smuxOut;
	wire shiftlrbar, shiftalbar, tempCarry;
	bit_32_mux fmux(.i1(in1),.i2(32'b1),.sel(ALUSw),.op(fmuxOut));
	assign tempNeg = ~in2;
	bit_32_mux smux(.i1(in2),.i2(tempNeg),.sel(ALUSw),.op(smuxOut));
	assign andOut = fmuxOut & smuxOut;
	assign xorOut = fmuxOut ^ smuxOut;
	assign lsOut = fmuxOut;
	assign shiftlrbar = ALUOp[1];
	assign shiftalbar = ALUOp[0];
	diff d1(.in1(fmuxOut),.in2(smuxOut),.out(diffOut));
	shifter s1(.in(fmuxOut),.shamt(smuxOut),.albar(shiftalbar),.lrbar(shiftlrbar),.out(shiftOut));
	CLA32bit cla1(.a(fmuxOut),.b(smuxOut),.cin(1'b0),.cout(tempCarry),.p(),.g(),.s(addOut));
	always @(*)
		begin
			if(ALUOp==4'b0000)
				begin
					result = lsOut;
				end
			else if(ALUOp==4'b0001)
				begin
					carry = tempCarry;
					result = addOut;
				end
			else if(ALUOp==4'b1000)
				begin
					result = addOut;
				end
			else if(ALUOp==4'b1001)
				begin
					result = diffOut;
				end
			else if(ALUOp==4'b0010)
				begin 
					result = andOut;
				end
			else if(ALUOp==4'b0011)
				begin 
					result = xorOut;
				end
			else if(ALUOp[3:2]==2'b01)
				begin 
					result = shiftOut;
				end
			else
				begin
					result = 32'd0;
				end
			
		end
	always @(result)
		begin
			if(result == 32'd0)
				begin
					zero = 1'b1;
				end
			else
				begin
					zero = 1'b0;
				end
			sign = result[31];
		end
endmodule