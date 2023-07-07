`timescale 1ns/1ps

module sign_extender(input [5:0] opcode, funct, input [15:0] instr, output reg[31:0] out);

always @(*)
begin

    if(opcode == 6'b000010)
    begin
        out = {{27{1'b0}}, instr[15:11]};
    end

    else
    begin
        out =  {{16{instr[15]}}, instr};
    end
end 

endmodule