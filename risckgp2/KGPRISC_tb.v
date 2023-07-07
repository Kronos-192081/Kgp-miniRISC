`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:40:09 11/04/2022
// Design Name:   KGPRISC
// Module Name:   C:/Users/Student/Downloads/coarisc/coarisc/risckgp2/KGPRISC_tb.v
// Project Name:  risckgp2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: KGPRISC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module KGPRISC_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [3:0] inp;

	// Outputs
	wire [31:0] res;
	wire [15:0] out;

	// Instantiate the Unit Under Test (UUT)
	KGPRISC uut (
		.clk(clk), 
		.rst(rst), 
		.sw(inp),
		.out(out)
	);

	initial begin
	$monitor($time, ": Instr = %b, reg4 = %d\t, reg5 = %d\t, reg8 = %d\t, reg9 = %d\t, reg10 = %d\t, reg11 = %d\t, reg12 = %d\t,reg13 = %d\t,reg15 = %d\t, reg14 = %d\t, reg16 = %d\t, reg18 = %d\t, reg20 = %d\t,reg21 = %d\t",
	uut.DP.instr,
	$signed(uut.DP.rf.register[4]),
	$signed(uut.DP.rf.register[5]),
	$signed(uut.DP.rf.register[8]),
	$signed(uut.DP.rf.register[9]),
	$signed(uut.DP.rf.register[10]),
	$signed(uut.DP.rf.register[11]),
	$signed(uut.DP.rf.register[12]),
	$signed(uut.DP.rf.register[13]),
	$signed(uut.DP.rf.register[15]),
	$signed(uut.DP.rf.register[14]),
	$signed(uut.DP.rf.register[16]),
	$signed(uut.DP.rf.register[18]),
	$signed(uut.DP.rf.register[20]),
	$signed(uut.DP.rf.register[21]),
	);
		// Initialize Inputs
		clk = 0;
		rst = 1;
	

		// Wait 100 ns for global reset to finish
		#10;
       rst = 0;
		 
		// Add stimulus here

	end
	always #10 clk = ~clk;
	
      
endmodule

