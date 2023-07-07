`timescale 1ns/1ps
// Assignment - 3
// Group - 58
// Question 2
// Shiladitya De - 20CS30061
// Aritra Mitra - 20CS30006
module CLA4Bit_Augmented(input[3:0] a,b,input cin,output P,G,output[3:0] s);
	/* This file takes two 4-bit inputs a and b, and a carry-in bit, and outputs the sum and the block-propagate and block-generate bits.
	Logic:
	for all bits,
		p_i = a_i AND b_i
		g_i = a_i XOR b_i
		c_i+1 = g_i OR (p_i AND c_i)
	taking c_0 as cin, and recursively expanding,
		c_1 = g_0 OR (p_0 AND cin)
		c_2 = g_1 OR (p_1 AND g_0) OR (p_1 AND p_0 AND cin)
		c_3 = g_2 OR (p_2 AND g_1) OR (p_2 AND p_1 AND g_0) OR (p_2 AND p_1 AND p_0 AND cin)
		p_out = p_3 AND p_2 AND p_1 AND p_0
		g_out = g_3 OR (p_3 AND g_2) OR (p_3 AND p_2 AND g_1) OR (p_3 AND p_2 AND p_1 AND g_0)
	*/
	wire[3:0] p,g,carry;
	assign p = a ^ b;
	assign g = a & b;
	assign carry[0] = cin;
	assign carry[1] = g[0] | ( p[0] & carry[0] );
	assign carry[2] = g[1] | ( p[1] & g[0] ) | ( p[1] & p[0] & carry[0] );
	assign carry[3] = g[2] | ( p[2] & g[1] ) | ( p[2] & p[1] & g[0] ) | ( p[2] & p[1] & p[0] & carry[0] );
	assign s = p ^ carry;
	assign P = p[3] & p[2] & p[1] & p[0];
	assign G = g[3] | ( p[3] & g[2] ) | ( p[3] & p[2] & g[1] ) | ( p[3] & p[2] & p[1] & g[0] );
endmodule
