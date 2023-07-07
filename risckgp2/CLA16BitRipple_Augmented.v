`timescale 1ns/1ps
// Assignment - 3
// Group - 58
// Question 2
// Shiladitya De - 20CS30061
// Aritra Mitra - 20CS30006
module CLA16BitRipple_Augmented(input[15:0] a,b, input cin, output cout,p,g, output[15:0] s);
	/* This file creates a 16-Bit CLA where the block-propagate and block-generate are used along with the Lookahead Carry Unit*/
	wire[4:1] carry; 
	wire[3:0] P, G;
	CLA4Bit_Augmented cla1(.a(a[3:0]), .b(b[3:0]), .cin(cin), .P(P[0]), .G(G[0]), .s(s[3:0]));
	CLA4Bit_Augmented cla2(.a(a[7:4]), .b(b[7:4]), .cin(carry[1]), .P(P[1]), .G(G[1]), .s(s[7:4]));
	CLA4Bit_Augmented cla3(.a(a[11:8]), .b(b[11:8]), .cin(carry[2]), .P(P[2]), .G(G[2]), .s(s[11:8]));
	CLA4Bit_Augmented cla4(.a(a[15:12]), .b(b[15:12]), .cin(carry[3]), .P(P[3]), .G(G[3]), .s(s[15:12]));
	LCU lcu(.cin(cin), .p(P), .g(G), .P(p), .G(g), .carry(carry));
	assign cout = carry[4];
endmodule
