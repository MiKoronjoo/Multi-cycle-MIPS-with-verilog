`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:18:57 05/31/2019 
// Design Name: 
// Module Name:    Register_with_enable 
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
module Register_with_enable(input clk,en,input [31:0] dataIn,output reg [31:0] dataOut
    );
	 
always@(posedge clk)
begin
	if(en)
	begin 
	dataOut=dataIn;
	end
end
endmodule
