`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:45:38 05/31/2019 
// Design Name: 
// Module Name:    TwoInputMux 
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
module TwoInputMux(input select,input [31:0] in0,in1,output [31:0] out
    );
	 
assign out=select ? in1 : in0;

endmodule
