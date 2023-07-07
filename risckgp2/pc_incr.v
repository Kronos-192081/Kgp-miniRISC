`timescale 1ns/1ps

module pc_incr(input [31:0]currAddr, output [31:0]nextAddr);

   assign nextAddr = currAddr + 32'd4;

endmodule