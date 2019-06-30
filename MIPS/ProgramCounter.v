`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:19:14 06/05/2019 
// Design Name: 
// Module Name:    ProgramCounter 
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
module ProgramCounter(input clk,en,input [31:0] address,output reg [31:0] pcout
    );

	 
initial begin 
	pcout=240;
end


always@(posedge clk) 
begin

		if(en)
		begin
		pcout=address;
		end
		
end

endmodule
