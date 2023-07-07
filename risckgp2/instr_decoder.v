`timescale 1ns/1ps

module instr_decoder(
    input [31:0] instr, 
    output [5:0] opcode, funct,
    output [4:0] rs, rt, shamt,
    output [15:0] off_imm,
    output [20:0] j1_addr,
    output [25:0] j2_addr);

    assign opcode = instr[31:26];
    assign funct = instr[5:0];
    assign rs = instr[25:21];
    assign rt = instr[20:16];
    assign shamt = instr[15:11];
    assign off_imm = instr[15:0];
    assign j1_addr = instr[20:0];
    assign j2_addr = instr[25:0];

endmodule 