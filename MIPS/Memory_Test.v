`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:48:29 05/28/2019
// Design Name:   Memory
// Module Name:   C:/Users/Markazi.co/Desktop/Computer Architecture/verilog/MIPS/Memory_Test.v
// Project Name:  MIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Memory_Test;

	// Inputs
	reg [31:0] wd;
	reg [31:0] address;
	reg we;
	reg clk;

	// Outputs
	wire [31:0] rd;

	// Instantiate the Unit Under Test (UUT)
	Memory uut (
		.wd(wd), 
		.address(address), 
		.we(we), 
		.clk(clk), 
		.rd(rd)
	);

	initial begin
		// Initialize Inputs
		wd = 15;
		address = 0;
		we = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		clk=~clk;
		we=1;
        
		// Add stimulus here

	end
      
endmodule

