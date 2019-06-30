`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:08:19 06/29/2019
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

	// Outputs
	wire INA;
	wire [31:0] pc_out;
	wire [3:0] system_state;
	wire [31:0] PCIN;
	wire [4:0] reg_write_dest;
	wire [31:0] reg_write_data;
	wire [31:0] regdata1;
	wire [31:0] regdata2;

	// Instantiate the Unit Under Test (UUT)
	Top uut (
		.clock(clock), 
		.NON_maskable_interrupt(NON_maskable_interrupt), 
		.interrupt_r(interrupt_r), 
		.CPU_busy(CPU_busy), 
		.INA(INA), 
		.pc_out(pc_out), 
		.system_state(system_state), 
		.PCIN(PCIN), 
		.reg_write_dest(reg_write_dest), 
		.reg_write_data(reg_write_data), 
		.regdata1(regdata1), 
		.regdata2(regdata2)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		NON_maskable_interrupt = 0;
		interrupt_r = 0;
		CPU_busy = 0;

		// Wait 100 ns for global reset to finish
		//s2=s2+3=3
		#100;
       interrupt_r  = 1; //s2=0
		#100;
       interrupt_r  = 0;
		 //s3=s3+4=4
		 //s4=s3+s2=4
		 
		#560;
		NON_maskable_interrupt = 1;//s3=0
		#100;
		NON_maskable_interrupt = 0;
		//s2=s2+3=3
		//s3=s3+4=4
		//s4=s2+s3=7
		// Add stimulus here

	end
      always begin #20 clock=~clock; end
endmodule

