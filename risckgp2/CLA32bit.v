`timescale 1ns/1ps

module CLA32bit(input[31:0] a,b, input cin, output cout,p,g, output[31:0] s);
    wire [1:0] P, G;
    wire cout1;
    CLA16BitRipple_Augmented cla1(.a(a[15:0]), .b(b[15:0]), .cin(cin), .p(P[0]), .g(G[0]), .cout(cout1),.s(s[15:0]));
    CLA16BitRipple_Augmented cla2(.a(a[31:16]), .b(b[31:16]), .cin(cout1), .p(P[1]), .g(G[1]), .cout(cout),.s(s[31:16]));

endmodule


