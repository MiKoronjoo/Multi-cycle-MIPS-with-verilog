`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:23:39 05/31/2019 
// Design Name: 
// Module Name:    RegDestMux 
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
module RegDestMux(input select,input [4:0] data1,data0,output [4:0] dataOut 
    );
	 
assign dataOut = select ? data1:data0;

endmodule
