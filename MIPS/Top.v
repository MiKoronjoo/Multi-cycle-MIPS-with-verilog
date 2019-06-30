`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:04:07 06/05/2019 
// Design Name: 
// Module Name:    Top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Top(input clock,NON_maskable_interrupt,interrupt_r,CPU_busy
    );

wire [31:0] pc_out;

wire [1:0] ALU_operation;
wire memory_toregister;
wire register_dst;
wire instr_or_data_select;
wire ALUSrc1;
wire [1:0] ALUSrc2;
wire irWrite;
wire memWrite;
wire pcWrite;
wire is_branch;
wire regWrite;
wire [1:0] pcsource;
wire [3:0] system_state;
wire [31:0] memory_in_addr;
wire [31:0] mem_out_instr_data;
wire [31:0] instruction;
wire [31:0] data_;
wire [31:0] interruptAddress;
wire [31:0] savedPC;
wire [31:0] PCIN;

wire [2:0] ALU_control;
wire [4:0] reg_write_dest;
wire [31:0] reg_write_data;
wire [31:0] regdata1;
wire [31:0] regdata2;
wire [31:0] regdata1_a;
wire [31:0] regdata2_b;
wire [31:0] signimm;
wire [31:0] srcB;
wire [31:0] srcA;
wire [31:0] ALUresult;
wire zerof;
wire PCEn;
wire [31:0] ALUOut;
wire [31:0] PC_IN;
wire select_IR;
wire [31:0] selected_IR;
assign PCEn = pcWrite | ( is_branch & zerof) ;

ProgramCounter PC_ (
    .clk(clock), 
    .en(PCEn),  
    .address(PCIN),
    .pcout(pc_out)
    );


	 
TwoInputMux IorDMux (
    .select(instr_or_data_select), 
    .in0(pc_out), 
    .in1(ALUOut),
    .out(memory_in_addr)
    );



Memory instr_data_memory (
    .wd(regdata2_b), 
    .address(memory_in_addr), 
    .we(memWrite), 
    .clk(clock), 
    .rd(mem_out_instr_data)
    );


Register_with_enable instruction_reg (
    .clk(clock), 
    .en(irWrite), 
    .dataIn(mem_out_instr_data), 
    .dataOut(instruction)
    );
	 

Register data_register (
    .clk(clock), 
    .dataIn(mem_out_instr_data), 
    .dataOut(data_)
    );


TwoInputMux IR_mux (
    .select(select_IR), 
    .in0(mem_out_instr_data), 
    .in1(instruction), 
    .out(selected_IR)
    );


ControlUnit Control_Unit(
    .executedInstr(pc_out), 
	 .pcinput(PCIN),
	 .nmint(NON_maskable_interrupt),
	 .interrupt(interrupt_r),
	 .busy(CPU_bus),
    .opcode(selected_IR[31:26]), 
    .clk(clock), 
    .ALUOp(ALU_operation), 
    .MemtoReg(memory_toregister), 
    .RegDst(register_dst), 
    .IorD(instr_or_data_select), 
    .ALUSrcA(ALUSrc1), 
    .IRWrite(irWrite), 
    .MemWrite(memWrite), 
    .PCWrite(pcWrite), 
    .Branch(is_branch), 
    .RegWrite(regWrite), 
    .ALUSrcB(ALUSrc2), 
    .PCSrc(pcsource), 
	 .DelayedIR(select_IR),
	 .pcslct(pcslct),
	 .savePC(savePC),
    .current_state(system_state)
    );

	 
ALU_decoder ALUdecoder (
    .ALUop(ALU_operation), 
    .funct(instruction[5:0]), 
    .control(ALU_control)
    );


RegDestMux Write_reg_mux (
    .select(register_dst), 
    .data0(instruction[20:16]), 
    .data1(instruction[15:11]), 
    .dataOut(reg_write_dest)
    );

TwoInputMux mem_to_reg_Mux (
    .select(memory_toregister), 
    .in0(ALUOut), 
    .in1(data_), 
    .out(reg_write_data)
    );
	 
RegisterFile Register_FILE (
    .clk(clock), 
    .we3(regWrite), 
    .address1(instruction[25:21]), 
    .address2(instruction[20:16]), 
    .address3(reg_write_dest), 
    .wdata3(reg_write_data), 
    .rdata1(regdata1), 
    .rdata2(regdata2)
    );

Register read_register1 (
    .clk(clock), 
    .dataIn(regdata1), 
    .dataOut(regdata1_a)
    );

Register read_register2 (
    .clk(clock), 
    .dataIn(regdata2), 
    .dataOut(regdata2_b)
    );

SignExtend SE ( 
    .in(instruction[15:0]), 
    .out(signimm)
    );

FourInputMux alu_src_b_mux (
    .select(ALUSrc2), 
    .data0(regdata2_b), 
    .data1(4), 
    .data2(signimm), 
    .data3({signimm[29:0],2'b00}), 
    .dataOut(srcB)
    );

TwoInputMux alu_src_a_mux (
    .select(ALUSrc1), 
    .in0(pc_out), 
    .in1(regdata1_a), 
    .out(srcA)
    );

ALU ALU_ins (
    .srca(srcA), 
    .srcb(srcB), 
    .ALUcontrol(ALU_control), 
    .zero(zerof), 
    .out(ALUresult)
    );

Register Alu_out_reg (
    .clk(clock), 
    .dataIn(ALUresult), 
    .dataOut(ALUOut)
    );

FourInputMux pc_source_mux (
    .select(pcsource), 
    .data0(ALUresult), 
    .data1(ALUOut), 
    .data2({pc_out[31:28],instruction[25:0],2'b00}), 
    .data3(interruptAddress), 
    .dataOut(PC_IN)
    );


//////////////////////

TwoInputMux interrupt_mux (
    .select(NON_maskable_interrupt), 
    .in0(0), 
    .in1(20), 
    .out(interruptAddress)
    );

TwoInputMux PC_savedPC (
    .select(pcslct), 
    .in0(savedPC), 
    .in1(PC_IN), 
    .out(PCIN)
    );



// save pc before executing interrupt
Register_with_enable instance_name (
    .clk(clock), 
    .en(savePC), 
    .dataIn(pc_out), 
    .dataOut(savedPC)
    );



endmodule
