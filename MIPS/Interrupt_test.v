`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:40:43 06/04/2019
// Design Name:   Interrupt_state
// Module Name:   C:/Users/Markazi.co/Desktop/Computer Architecture/verilog/MIPS/Interrupt_test.v
// Project Name:  MIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Interrupt_state
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Interrupt_test;

	// Inputs
	reg [3:0] control_state;
	reg clk;
	reg interrupt;
	reg busy;
	reg non_maskable_int;
	reg [31:0] instr;

	// Outputs
	wire respond;
	wire NMI;
	wire [1:0] state;

	// Instantiate the Unit Under Test (UUT)
	Interrupt_state uut (
		.control_state(control_state), 
		.clk(clk), 
		.interrupt(interrupt), 
		.busy(busy), 
		.non_maskable_int(non_maskable_int), 
		.instr(instr), 
		.respond(respond), 
		.NMI(NMI), 
		.state(state)
	);

	initial begin
		control_state = 0;
		clk = 0;
		interrupt = 1;
		busy = 1;
		non_maskable_int = 1;
		instr = 97;

		// Wait 100 ns for global reset to finish
		#100;
      non_maskable_int=0;
		// Add stimulus here

	end
      always begin #20 clk=~clk; instr=instr+1;end
endmodule

