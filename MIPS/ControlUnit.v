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
module ControlUnit(input [31:0] executedInstr , input [1:0] int_state , input int_respond , input [5:0] opcode , input clk ,
						output reg [1:0] store_PC_REGFILE , output reg [1:0] ALUOp , output reg MemtoReg , RegDst , IorD , ALUSrcA ,
						IRWrite , MemWrite , PCWrite , Branch , RegWrite ,DelayedIR , output reg [1:0] ALUSrcB , output reg [1:0] PCSrc,
						output reg [3:0] current_state
    );				//store_PC_REGFILE-> 00:do nothing, 01:store, 11:restore

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

//last instructions executed in interrupts
parameter [31:0]
				mi=0,
				nmi=100;
	
initial begin
	current_state = fetch;
end

always@(posedge clk)
begin
	store_PC_REGFILE=0;
	
	case(current_state)
	
		fetch:	begin
						RegWrite=0;
						MemWrite=0;
						Branch=0;
						if(int_state==2 & (executedInstr==mi | executedInstr==nmi))
						begin
						store_PC_REGFILE=3;
						IRWrite=1;
						end
						
						else
						begin
							if(int_respond==0 & int_state==2)
								begin
								PCSrc=3;
								store_PC_REGFILE=1;
								end
							
							else
								begin
									PCSrc=0;
								end
								IRWrite=1;
								PCWrite=1;
								ALUOp=0;
								ALUSrcA=0;
								ALUSrcB=1;
								IorD=0;
						end
						DelayedIR=0;
						current_state=decode;
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
