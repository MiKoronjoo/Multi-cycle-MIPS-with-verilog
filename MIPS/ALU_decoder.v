`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:47:02 06/04/2019 
// Design Name: 
// Module Name:    ALU_decoder 
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
module ALU_decoder(input [1:0] ALUop,input [5:0] funct,output reg [2:0] control
    );
	
parameter [2:0]
			add=2,
			sub=6,
			andd=0,
			orr=1,
			slt=7;
	
always@(ALUop,funct)
begin 
	case(ALUop)
	 2'b00:	begin
				control=add;
				end
	 
	 2'b01:	begin
				control=sub;
				end
				
	 2'b10:	begin
				if(funct==6'b100000)begin
					control=add;	  end
				
				else if(funct==6'b100010)begin
					control=sub;     end
				
				else if(funct== 6'b100100)begin
					control=andd;    end
				
				else if(funct == 6'b100101)begin
					control=orr;     end
				
				else if(funct == 6'b101010)begin
					control=slt;     end
				end
	endcase
end

endmodule
