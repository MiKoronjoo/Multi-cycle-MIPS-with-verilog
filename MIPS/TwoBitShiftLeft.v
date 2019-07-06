`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:36:38 05/31/2019 
// Design Name: 
// Module Name:    TwoBitShiftLeft 
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
module TwoBitShiftLeft(input [31:0] dataIn,output [31:0] dataOut
    );

assign dataOut = {dataIn[29:0],2'b00};

endmodule
