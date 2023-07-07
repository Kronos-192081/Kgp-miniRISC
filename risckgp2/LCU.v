`timescale 1ns/1ps
// Assignment - 3
// Group - 58
// Question 2
// Shiladitya De - 20CS30061
// Aritra Mitra - 20CS30006
module LCU(input cin, input[3:0] p,g, output P,G, output[4:1] carry);
	/* This file takes two 4-bit block-propagate and block-generate inputs p and g, and a carry-in bit, and outputs the higher block-propagate and block-generate bits P and G the carry-out bits.
	Logic:
	for all bits,
		carry_i+1 = g_i OR (p_i AND c_i)
	taking c_0 as cin, and recursively expanding,
		carry_1 = g_0 OR (p_0 AND cin)
		carry_2 = g_1 OR (p_1 AND g_0) OR (p_1 AND p_0 AND cin)
		carry_3 = g_2 OR (p_2 AND g_1) OR (p_2 AND p_1 AND g_0) OR (p_2 AND p_1 AND p_0 AND cin)
		carry_4 = g_3 OR (p_3 AND g_2) OR (p_3 AND p_2 AND g_1) OR (p_3 AND p_2 AND p_1 AND g_0) OR (p_3 AND p_2 AND p_1 AND p_0 AND cin)
	*/
	assign carry[1] = g[0] | ( p[0] & cin );
	assign carry[2] = g[1] | ( p[1] & g[0] ) | ( p[1] & p[0] & cin );
	assign carry[3] = g[2] | ( p[2] & g[1] ) | ( p[2] & p[1] & g[0] ) | ( p[2] & p[1] & p[0] & cin );
	assign carry[4] = g[3] | ( p[3] & g[2] ) | ( p[3] & p[2] & g[1] ) | ( p[3] & p[2] & p[1] & g[0] ) | (p[3] & p[2] & p[1] & p[0] & cin );
	assign P = p[3] & p[2] & p[1] & p[0];
	assign G = g[3] | ( p[3] & g[2] ) | ( p[3] & p[2] & g[1] ) | ( p[3] & p[2] & p[1] & g[0] );
endmodule
