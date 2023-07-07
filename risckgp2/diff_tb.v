`timescale 1ns/1ps
module diff_tb;
    reg [31:0] in1;
    reg [31:0] in2;
    wire[31:0] out;

    diff diff1( .in1(in1), .in2(in2), .out(out));

    initial begin
        $monitor ($time, "in1 = %d, in2 = %d, out = %d", in1, in2, out);
         in1 = 32'd5; in2 = 32'd3;
        #10;
         in1 = 32'd78; in2 = 32'd36;
        #10;
        #10 $finish;
    end

endmodule