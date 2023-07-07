`timescale 1ns/1ps

module bit_1_mux( input i1, i2, sel, output op);

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