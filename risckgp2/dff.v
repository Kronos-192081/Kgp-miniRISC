`timescale 1ns/1ps

module dff(input clk, rst, inp, output reg op);

    always @(posedge clk or posedge rst) begin
        if(rst)
            op <= 1'b0;
        else
            op <= inp;
    end

endmodule
