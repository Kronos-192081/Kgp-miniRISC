`timescale 1ns/1ps
module jumpcontrol(input[5:0] opcode, input sign, input zero, input carry, output reg jumpValidity);
	always @(*)
		begin
			case(opcode)
			6'b001000:
				begin
					jumpValidity = 1;
				end
			6'b001001:
				begin
					jumpValidity = 1;
				end
			6'b001010:
				begin
					if(sign && !zero)
						begin
							jumpValidity = 1;
						end
					else
						begin
							jumpValidity = 0;
						end
				end
			6'b001011:
				begin
					if(zero)
						begin
							jumpValidity = 1;
						end
					else
						begin
							jumpValidity = 0;
						end
				end
			6'b001100:
				begin
					if(zero)
						begin
							jumpValidity = 0;
						end
					else
						begin
							jumpValidity = 1;
						end
				end
			6'b001101:
				begin
					jumpValidity = 1;
				end
			6'b001110:
				begin
					if(carry)
						begin
							jumpValidity = 1;
						end
					else
						begin
							jumpValidity = 0;
						end
				end
			6'b001111:
				begin
					if(zero)
						begin
							jumpValidity = 0;
						end
					else
						begin
							jumpValidity = 1;
						end
				end
			default:
				begin
					jumpValidity = 0;
				end
			endcase
		end
endmodule