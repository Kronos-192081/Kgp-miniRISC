`timescale 1ns/1ps

module branch_ctrl(
    input [31:0] next_pc,
    input [20:0] br_addr,
    input [25:0] j_addr,
    input [31:0] rs,
    input jb,
    input jad,
    input br_val,
    input jump_val,
    output [31:0] nextaddr
);

wire [31:0] br_extend, j_extend;
wire [31:0] op1, op2;
wire jump_br;

and a1(jump_br, br_val, jump_val);

assign br_extend = {{11{br_addr[20]}}, br_addr};
assign j_extend = {{6{j_addr[25]}}, j_addr};

bit_32_mux b1(.i1(j_extend), .i2(br_extend), .sel(jb), .op(op1));
bit_32_mux b2(.i1(op1), .i2(rs), .sel(jad), .op(op2));
bit_32_mux b3(.i1(next_pc), .i2(op2), .sel(jump_br), .op(nextaddr));

endmodule
