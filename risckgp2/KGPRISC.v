module KGPRISC(input clk, input rst, input [3:0] sw, output signed[15:0] out);
wire[5:0] opcode, funct;
wire[1:0] RDst, MReg;
wire[3:0] ALUOp;
wire signed[31:0] res;
wire RWrite, MR, MW, ALUSr, ALUSw, Branch, JAd, JB;
control_path CP(.opcode(opcode),.funct(funct),.RDst(RDst),.MReg(MReg),.ALUOp(ALUOp),.RWrite(RWrite),.MR(MR),.MW(MW),.ALUSr(ALUSr),.ALUSw(ALUSw),.Branch(Branch),.JAd(JAd),.JB(JB));
datapath DP(.opcode(opcode),.funct(funct),.RDst(RDst),.disp(sw),.MReg(MReg),.ALUOp(ALUOp),.RWrite(RWrite),.MR(MR),.MW(MW),.ALUSr(ALUSr),.ALUSw(ALUSw),.Branch(Branch),.JAd(JAd),.JB(JB),.clk(clk),.rst(rst),.Result(res), .out(out));
endmodule
