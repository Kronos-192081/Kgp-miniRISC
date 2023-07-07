`timescale 1ns/1ps
module mux32b3case(input[31:0] in1, input[31:0] in2, input[31:0] in3, input[1:0] ch, output reg[31:0] out);
	always@(*)
		begin
			case(ch)
			2'b00:
				begin
					out = in1;
				end
			2'b01:
				begin
					out = in2;
				end
			2'b10:
				begin
					out = in3;
				end
			default:
				begin
					out = in3;
				end
			endcase
		end
endmodule