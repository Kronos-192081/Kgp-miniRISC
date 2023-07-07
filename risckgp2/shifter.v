`timescale 1ns/1ps
module shifter(input signed[31:0] in, input[31:0] shamt, input lrbar, input albar, output reg[31:0] out);
always @(*) 
	begin
		if (lrbar)
			begin
				if(albar)
					begin	
						out = in >>> shamt;
					end
				else
					begin
						out = in >> shamt;
					end
			end
		else
			begin
				if(albar)
					begin
						out = in;
					end
				else
					begin
						out = in << shamt;
					end
			end
	end
endmodule