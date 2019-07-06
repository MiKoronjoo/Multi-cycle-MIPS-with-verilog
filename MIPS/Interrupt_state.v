`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:23:59 06/04/2019 
// Design Name: 
// Module Name:    Interrupt_state 
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
module Interrupt_state(input [3:0] control_state,input clk,interrupt,busy,non_maskable_int,input[31:0] instr,output reg respond,
								output reg NMI,output reg [1:0] state
    );															//interrupt wont be deasserted until it is handled.
	 
parameter [1:0] 
			s0=2'b00,
			s1=2'b01,
			s2=2'b10;	

parameter [31:0] 
				nmi_last_instr=100,				//last instructions
				mi_last_instr=0;
wire MI;
wire intr;


assign MI=interrupt & (~busy);	 
assign intr= MI | non_maskable_int;

initial 
begin
	respond=0;
	state=s0;
end

always@(posedge clk)
begin
	case(state)
		s0:	begin
				if(intr)begin state=s2; NMI=non_maskable_int; end
				end
		
		s1:	begin
				respond =0;
				if(!intr)begin state=s0;end
				end
		
		s2:	begin
				if(control_state==0)
				begin 
					respond=1;//only jump on the first time(control unit) 
					if(instr== mi_last_instr | instr== nmi_last_instr)
					begin 
						state= s1;
					end
				end
				end
			
	endcase
end

endmodule
