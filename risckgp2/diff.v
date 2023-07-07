`timescale 1ns/1ps

module diff(
    input [31:0] in1,
    input [31:0] in2,
    output reg [31:0] out  
);

wire [31:0] temp, temp1, temp2, temp3, temp4;
wire t1, t2, t3;
assign temp2 = 32'd1;

assign temp = in1^in2;
assign temp1 = ~temp;
CLA32bit cla5(.a(temp1), .b(temp2), .cin(1'b0), .p(), .g(), .cout(t3), .s(temp4));
assign temp3 = temp4 & temp;

always @(*)
begin
    case(temp3)
    32'd1:
        begin
            out <= 32'd0;
        end
    32'd2:
        begin
            out <= 32'd1;
        end
    32'd4:
        begin
            out <= 32'd2;
        end
    32'd8:
        begin
            out <= 32'd3;
        end
    32'd16:
        begin
            out <= 32'd4;
        end
    32'd32:
        begin
            out <= 32'd5;
        end
    32'd64:
        begin
            out <= 32'd6;
        end
    32'd128:
        begin
            out <= 32'd7;
        end
    32'd256:
        begin
            out <= 32'd8;
        end
    32'd512:
        begin
            out <= 32'd9;
        end
    32'd1024:
        begin
            out <= 32'd10;
        end
    32'd2048:
        begin
            out <= 32'd11;
        end
    32'd4096:
        begin
            out <= 32'd12;
        end
    32'd8192:
        begin
            out <= 32'd13;
        end
    32'd16384:
        begin
            out <= 32'd14;
        end
    32'd32768:
        begin
            out <= 32'd15;
        end
    32'd65536:
        begin
            out <= 32'd16;
        end
    32'd131072:
        begin
            out <= 32'd17;
        end
    32'd262144:
        begin
            out <= 32'd18;
        end
    32'd524288:
        begin
            out <= 32'd19;
        end
    32'd1048576:
        begin
            out <= 32'd20;
        end
    32'd2097152:
        begin
            out <= 32'd21;
        end
    32'd4194304:
        begin
            out <= 32'd22;
        end
    32'd8388608:
        begin
            out <= 32'd23;
        end
    32'd16777216:
        begin
            out <= 32'd24;
        end
    32'd33554432:
        begin
            out <= 32'd25;
        end
    32'd67108864:
        begin
            out <= 32'd26;
        end
    32'd134217728:
        begin
            out <= 32'd27;
        end
    32'd268435456:
        begin
            out <= 32'd28;
        end
    32'd536870912:
        begin
            out <= 32'd29;
        end
    32'd1073741824:
        begin
            out <= 32'd30;
        end
    32'd2147483648:
        begin
            out <= 32'd31;
        end
    default:
		begin
			out <= 32'd32;
		end
    endcase

end

endmodule
