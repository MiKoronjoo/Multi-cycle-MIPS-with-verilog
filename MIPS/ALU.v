`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:52:34 06/04/2019 
// Design Name: 
// Module Name:    ALU 
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
module ALU(input [31:0] srca,srcb,input [2:0] ALUcontrol,output reg zero , output reg [31:0] out
    );

parameter [2:0]
			add=2,
			sub=6,
			andd=0,
			orr=1,
			slt=7;
			
always@(*)
begin 
	case(ALUcontrol)
	add:	begin	
			out=srca+srcb;
			end

	sub:	begin
			out=srca-srcb;
			end
	
	andd:	begin
			out=srca & srcb;
			end
			
	orr:	begin
			out=srca | srcb;
			end
	
	slt:	begin
			out=(srca<srcb) ? 1: 0;
			end
	endcase
	
	zero=(out==0) ? 1:0;

end

endmodule
