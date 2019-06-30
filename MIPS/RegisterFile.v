`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:46:29 05/31/2019 
// Design Name: 
// Module Name:    RegisterFile 
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

module RegisterFile(input clk,we3,input [1:0] sr,input [4:0] address1, address2, address3,
		input [31:0] wdata3
		,output [31:0] rdata1, rdata2
    );
	 
reg [31:0] regfile [31:0];
reg [31:0] backup [31:0];
reg [5:0] c;

initial begin 
			c=0;
			repeat(32)
			begin
			regfile[c]=0;
			c=c+1;
			end
end


always@(posedge clk)
begin
	c=0;
	regfile[0]=0;
	
		if(sr==1)//store
		begin
			repeat(32)
			begin
			backup[c]=regfile[c];
			c=c+1;
			end
		end
		
		if(sr==3)//restore 
		begin
			repeat(32)
			begin
			regfile[c]=backup[c];
			c=c+1;
			end
		end
		
		if(we3)
		begin
		if(address3 != 0)
			begin
			regfile[address3]=wdata3;
			end
		end
end

assign rdata1 = (address1 != 0) ? regfile[address1]:0;
assign rdata2 = (address2 != 0) ? regfile[address2]:0; 

endmodule
