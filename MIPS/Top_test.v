`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:50:40 06/06/2019
// Design Name:   Top
// Module Name:   C:/Users/Markazi.co/Desktop/Computer Architecture/verilog/MIPS/Top_test.v
// Project Name:  MIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Top_test;

	// Inputs
	reg clock;
	reg NON_maskable_interrupt;
	reg interrupt_r;
	reg CPU_busy;

	// Instantiate the Unit Under Test (UUT)
	Top uut (
		.clock(clock), 
		.NON_maskable_interrupt(NON_maskable_interrupt), 
		.interrupt_r(interrupt_r), 
		.CPU_busy(CPU_busy)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		NON_maskable_interrupt = 0;
		interrupt_r = 0;
		CPU_busy = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      always begin #700 clock=~clock; end
endmodule

