`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:37:24 06/05/2019 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(input [31:0] executedInstr,pcinput ,input nmint,interrupt,busy, input [5:0] opcode , input clk 
						, output reg [1:0] ALUOp , output reg MemtoReg , RegDst , IorD , ALUSrcA ,
						IRWrite , MemWrite , PCWrite , Branch , RegWrite ,DelayedIR , output reg [1:0] ALUSrcB , output reg [1:0] PCSrc,
						output reg pcslct,
						output reg savePC,INA,
						output reg [3:0] current_state
    );

//states
parameter [3:0] 
			   fetch=0,
				decode=1,
				memAdr=2,
				memRead=3,
				memWriteback=4,
				memWrite=5,
				execute=6,
				ALUwriteback=7,
				branch=8,
				addiExecute=9,
				addiWriteback=10,
				jump=11;

//instruction opcodes
parameter [5:0] 
				Rtype=0,
				addi=8,
				lw=35,
				beq=4,
				j=2,
				sw=43;
				
reg interrupt_execution;
reg interrupt_first_inst;
//last instructions executed in interrupts
parameter [31:0]
				mi=0,
				nmi=20;
	
initial begin
	current_state = fetch;
	interrupt_execution=0;
	pcslct=1;
	interrupt_first_inst=0;
end

always@(posedge clk)
begin
	interrupt_first_inst=0;
	pcslct=1;
	savePC=0;
	
	case(current_state)
	
		fetch:	begin
						if(interrupt_execution==0 & (nmint | (interrupt & (~busy))))
							begin
							interrupt_first_inst=1;
							savePC=1;
							PCSrc=3;
							PCWrite=1;
							INA=(interrupt & (~busy))& (~nmint);
							interrupt_execution=1;
							current_state=fetch;
							end
						else
						begin 
							if(interrupt_execution==1 & (pcinput==mi | pcinput==nmi))
								begin
								PCSrc=0;	
								pcslct=0;
								PCWrite=1;
								RegWrite=0;
								MemWrite=0;
								Branch=0;
								IRWrite=1;
								ALUOp=0;
								ALUSrcA=0;
								ALUSrcB=1;
								IorD=0;
								DelayedIR=0;
								interrupt_execution=0;
								current_state=decode;
								end
							else
								if(interrupt_execution==1 & (executedInstr==mi | executedInstr==nmi) & (~interrupt_first_inst))
									begin
									PCSrc=0;	
									pcslct=0;
									PCWrite=1;
									RegWrite=0;
									MemWrite=0;
									Branch=0;
									IRWrite=1;
									ALUOp=0;
									ALUSrcA=0;
									ALUSrcB=1;
									IorD=0;
									DelayedIR=0;
									interrupt_execution=0;
									current_state=decode;
									end
								else
									begin
									RegWrite=0;
									MemWrite=0;
									Branch=0;
									PCSrc=0;		
									IRWrite=1;
									PCWrite=1;
									ALUOp=0;
									ALUSrcA=0;
									ALUSrcB=1;
									IorD=0;
									DelayedIR=0;
									current_state=decode;
									end
						end
					end
					
		decode:	begin
						ALUSrcA=0;
						ALUSrcB=3;
						ALUOp=0;
						PCWrite=0;
						DelayedIR=1;
						IRWrite=0;
						case(opcode)
						
						sw:	begin
									current_state=memAdr;
								end
								
						lw:   begin
									current_state=memAdr;
								end
								
						Rtype:	begin
										current_state=execute;
									end
						
						beq:	begin
									current_state=branch;
								end
						
						addi:	begin
									current_state=addiExecute;
								end
								
						j:	begin
								current_state=jump;
							end
						endcase
						
					end
		
		memAdr:	begin
						ALUSrcA=1;
						ALUSrcB=2;
						ALUOp=0;
						IRWrite=0;
						if(opcode==sw)begin current_state=memWrite;end
						if(opcode==lw)begin current_state=memRead;end
					end
					
		memRead:	begin
						IorD=1;
						current_state=memWriteback;
					end
		
		memWriteback:	begin
								RegDst=0;
								MemtoReg=1;
								RegWrite=1;
								current_state=fetch;
							end
							
		memWrite:	begin
							IorD=1;
							MemWrite=1;
							current_state=fetch;
						end
						
		execute:	begin
						IRWrite=0;
						ALUSrcA=1;
						ALUSrcB=0;
						ALUOp=2;
						current_state=ALUwriteback;
					end
					
		ALUwriteback: begin
							RegDst=1;
							MemtoReg=0;
							RegWrite=1;
							current_state=fetch;
					     end
		
		branch:	begin
						IRWrite=0;
						ALUSrcA=1;
						ALUSrcB=0;
						ALUOp=1;
						PCSrc=1;
						Branch=1;
						current_state=fetch;
					end
		
		addiExecute:	begin
								IRWrite=0;
								ALUSrcA=1;
								ALUSrcB=2;
								ALUOp=0;
								current_state=addiWriteback;
							end
							
		addiWriteback:	begin
								RegDst=0;
								MemtoReg=0;
								RegWrite=1;
								current_state=fetch;
							end
		
		jump:	begin
					IRWrite=0;
					PCSrc=2;
					PCWrite=1;
					current_state=fetch;
				end
		
	endcase
	
end

endmodule
