`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:50:26 06/05/2019
// Design Name:   ControlUnit
// Module Name:   C:/Users/Markazi.co/Desktop/Computer Architecture/verilog/MIPS/Contorol_test.v
// Project Name:  MIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ControlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Contorol_test;

	// Inputs
	reg [31:0] executedInstr;
	reg [1:0] int_state;
	reg int_respond;
	reg [5:0] opcode;
	reg clk;

	// Outputs
	wire [1:0] store_PC_REGFILE;
	wire [1:0] ALUOp;
	wire MemtoReg;
	wire RegDst;
	wire IorD;
	wire ALUSrcA;
	wire IRWrite;
	wire MemWrite;
	wire PCWrite;
	wire Branch;
	wire RegWrite;
	wire [1:0] ALUSrcB;
	wire [1:0] PCSrc;
	wire [3:0] current_state;

	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
		.executedInstr(executedInstr), 
		.int_state(int_state), 
		.int_respond(int_respond), 
		.opcode(opcode), 
		.clk(clk), 
		.store_PC_REGFILE(store_PC_REGFILE), 
		.ALUOp(ALUOp), 
		.MemtoReg(MemtoReg), 
		.RegDst(RegDst), 
		.IorD(IorD), 
		.ALUSrcA(ALUSrcA), 
		.IRWrite(IRWrite), 
		.MemWrite(MemWrite), 
		.PCWrite(PCWrite), 
		.Branch(Branch), 
		.RegWrite(RegWrite), 
		.ALUSrcB(ALUSrcB), 
		.PCSrc(PCSrc), 
		.current_state(current_state)
	);

	initial begin
		// Initialize Inputs
		executedInstr = 0;
		int_state = 0;
		int_respond = 0;
		opcode =35;
		clk = 0;

		// Wait 100 ns for global reset to finish
		
		// Add stimulus here

	end
      always begin #20 clk=~clk; end
endmodule

