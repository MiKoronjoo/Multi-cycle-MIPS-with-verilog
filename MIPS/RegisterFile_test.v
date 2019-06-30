`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:05:24 06/05/2019
// Design Name:   RegisterFile
// Module Name:   C:/Users/Markazi.co/Desktop/Computer Architecture/verilog/MIPS/RegisterFile_test.v
// Project Name:  MIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegisterFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RegisterFile_test;

	// Inputs
	reg clk;
	reg we3;
	reg [1:0] sr;
	reg [4:0] address1;
	reg [4:0] address2;
	reg [4:0] address3;
	reg [31:0] wdata3;

	// Outputs
	wire [31:0] rdata1;
	wire [31:0] rdata2;

	// Instantiate the Unit Under Test (UUT)
	RegisterFile uut (
		.clk(clk), 
		.we3(we3), 
		.sr(sr), 
		.address1(address1), 
		.address2(address2), 
		.address3(address3), 
		.wdata3(wdata3), 
		.rdata1(rdata1), 
		.rdata2(rdata2)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		we3 = 0;
		sr=1;      //store
		address1 = 1;
		address2 = 0;
		address3 = 1;
		wdata3 = 15;

		// Wait 100 ns for global reset to finish
		#100;
		sr=0;		//do nothing
		#100;
		we3=1;
		#100;
		we3=0;
		#100;
		sr=3;		//restore
        
		// Add stimulus here

	end
      always begin #20 clk=~clk; end
endmodule

