`timescale 1ns/1ps
module programcounter(input[31:0] nextAddr, input clk, input rst, output reg[31:0] currAddr);
always @(posedge clk or posedge rst)
	begin
		if(rst)
			begin
				currAddr <= -32'd4;
			end
		else
			begin
				currAddr <= nextAddr;
			end
	end
endmodule