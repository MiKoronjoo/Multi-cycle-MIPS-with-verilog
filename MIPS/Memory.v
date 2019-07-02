`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:40:39 05/28/2019 
// Design Name: 
// Module Name:    Memory 
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
module Memory(input [31:0] wd,input [31:0] address, input we,clk, output [31:0] rd
    );

reg [31:0] memory [1024:0];

initial begin
	memory[0]=32'b00100000000000100000000000000000;//s2=0 int
	//memory[1]=32'b00100000000000110000000000000000;//s3=0
	memory[5]=32'b00100000000000110000000000000000;//s3=0 nmi
	memory[60]=32'b00100000010000100000000000000011;//addi $2,$2,3
	memory[61]=32'b00100000011000110000000000000100;//addi $3,$3,4
	memory[62]=32'b00000000010000110010000000100000;//add $4,$2,$3 
	memory[63]=32'b00001000000000000000000000111100;//jump memory[60]
end

always@(posedge clk)
begin
	if(we)
	begin
	memory[{2'b00,address[31:2]}]=wd;
	end
end

assign rd = memory[{2'b00,address[31:2]}];

endmodule
