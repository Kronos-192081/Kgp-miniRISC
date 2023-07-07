`timescale 1ns/1ps

module bit_32_mux( input[31:0] i1, i2, input sel, output reg [31:0] op);

always @(*)
begin
    if(sel)
		begin
        op = i2;
		end
    else
	   begin
        op = i1;
		end
end

endmodule