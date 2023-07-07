`timescale 1ns/1ps

module reg_file(
    input [4:0] rs,
    input [4:0] rt,
    input write_reg,
    input [4:0] wr,
	 input [3:0] disp,
    input [31:0] write,
    input clk, rst,
    output reg [31:0] rd1,
    output reg [31:0] rd2,
	 output reg [15:0] out
);

reg [31:0] register[31:0];
integer i;

always @(posedge clk or posedge rst)
begin

    if(rst)
    begin
        for(i = 0; i<32; i = i+1)
            register[i] <= 32'd0;
    end
    else if(write_reg)
    begin
        register[wr] <= write;
    end

end

always @(*)
begin
    rd1 = register[rs];
    rd2 = register[rt];
	 out = register[disp][15:0];
end

endmodule