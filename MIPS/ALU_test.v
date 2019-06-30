`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:22:40 06/04/2019
// Design Name:   ALU
// Module Name:   C:/Users/Markazi.co/Desktop/Computer Architecture/verilog/MIPS/ALU_test.v
// Project Name:  MIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_test;

	// Inputs
	reg [31:0] srca;
	reg [31:0] srcb;
	reg [2:0] ALUcontrol;

	// Outputs
	wire zero;
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.srca(srca), 
		.srcb(srcb), 
		.ALUcontrol(ALUcontrol), 
		.zero(zero), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		srca = 15;
		srcb = 15;
		ALUcontrol = 7;//15-15

		// Wait 100 ns for global reset to finish
		#100;
       srcb = 16;//16-15
		// Add stimulus here

	end
      
endmodule

