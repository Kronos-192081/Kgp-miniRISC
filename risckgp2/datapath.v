`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:28:20 10/28/2022 
// Design Name: 
// Module Name:    datapath 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module datapath(
input[1:0] RDst,
input RWrite,
input MR,
input MW,
input[1:0] MReg,
input ALUSr,
input[3:0] ALUOp,
input ALUSw,
input Branch,
input JAd,
input JB,
input clk,
input rst,
input [3:0] disp,
output[5:0] opcode,
output[5:0] funct,
output signed[31:0] Result,
output [15:0] out
    );
parameter ra = 5'b11111;
wire carry, zero, sign, jump_val,old_carry;
wire[31:0] Write, RD1, RD2, instr, ext_out, alu2, read, br_offset, nextaddr, curraddr, nPC;
wire[25:0] j_addr;
wire[20:0] br_addr;
wire[15:0] off_imm;
wire[4:0] rs, rt, wr;
assign br_offset = nextaddr >> 2'b10;
dff D(.clk(clk),.rst(rst),.inp(carry),.op(old_carry));
programcounter PC(.nextAddr(nextaddr),.clk(clk),.rst(rst),.currAddr(curraddr));
bram_instr_mem br_instr(
  .clka(clk), // input clka
  .addra(br_offset[9:0]), // input [9 : 0] addra
  .douta(instr) // output [31 : 0] douta
);
instr_decoder ID(.instr(instr),.opcode(opcode),.funct(funct),.rs(rs),.rt(rt),.shamt(),.off_imm(off_imm),.j1_addr(br_addr),.j2_addr(j_addr));
mux5b3case m531(.in1(rs),.in2(rt),.in3(ra),.ch(RDst),.out(wr));
reg_file rf(.rs(rs),.rt(rt),.write_reg(RWrite),.disp(disp),.wr(wr),.write(Write),.clk(clk),.rst(rst),.rd1(RD1),.rd2(RD2),.out(out));
sign_extender se1(.opcode(opcode),.funct(funct),.instr(off_imm),.out(ext_out));
bit_32_mux m3221(.i1(RD2),.i2(ext_out),.sel(ALUSr),.op(alu2));
ALU alu(.in1(RD1),.in2(alu2),.ALUSw(ALUSw),.ALUOp(ALUOp),.sign(sign),.carry(carry),.zero(zero),.result(Result));
jumpcontrol JC(.opcode(opcode),.sign(sign),.zero(zero),.carry(old_carry),.jumpValidity(jump_val));
pc_incr PCI(.currAddr(curraddr),.nextAddr(nPC));
branch_ctrl BC(.next_pc(nPC),.br_addr(br_addr),.j_addr(j_addr),.rs(RD1),.jb(JB),.jad(JAd),.br_val(Branch),.jump_val(jump_val),.nextaddr(nextaddr));
bram_data_mem br_data (
  .clka(~clk), // input clka
  .wea(MW), // input [0 : 0] wea
  .addra(Result[17:2]), // input [15 : 0] addra
  .dina(RD2), // input [31 : 0] dina
  .douta(read) // output [31 : 0] douta
);
mux32b3case m3231(.in1(Result),.in2(read),.in3(nPC),.ch(MReg),.out(Write));
endmodule
