`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:28:04 05/31/2019 
// Design Name: 
// Module Name:    FourInputMux 
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
module FourInputMux(input [1:0] select,input [31:0] data0,data1,data2,data3,output reg[31:0] dataOut
    );
always@(select,data0,data1,data2,data3)
begin
	case(select)
	2'b00:	begin
				dataOut=data0;
				end
	2'b01:	begin 
				dataOut=data1;
				end
	2'b10:	begin
				dataOut=data2;
				end
	2'b11:	begin
				dataOut=data3;
				end
	endcase
end
endmodule
