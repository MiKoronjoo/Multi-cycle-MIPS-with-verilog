`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:27:29 06/05/2019
// Design Name:   ProgramCounter
// Module Name:   C:/Users/Markazi.co/Desktop/Computer Architecture/verilog/MIPS/PC_test.v
// Project Name:  MIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ProgramCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_test;

	// Inputs
	reg clk;
	reg en;
	reg [1:0] sr;
	reg [31:0] address;

	// Outputs
	wire [31:0] pcout;

	// Instantiate the Unit Under Test (UUT)
	ProgramCounter uut (
		.clk(clk), 
		.en(en), 
		.sr(sr), 
		.address(address), 
		.pcout(pcout)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		en = 1;
		sr = 1;		//store 11110100 + 4
		address=244;
		// Wait 100 ns for global reset to finish
		#100;
      sr=0;
		#100;
		sr=3;			//restore 11110100+4
		// Add stimulus here

	end
			always begin #26 clk=~clk; end
			always begin #33 address=address+4; end
endmodule

