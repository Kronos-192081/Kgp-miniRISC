`timescale 1ns/1ps

module bit_10_mux( input[9:0] i1, i2, input sel, output [9:0] op);

always @(*)
begin
    if(sel)
        assign op = i2;
    else
        assign op = i1;
end

endmodule