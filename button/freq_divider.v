`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:58:14 05/05/2024 
// Design Name: 
// Module Name:    freq_divider 
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
module freq_divider (
	input clk_in,
	input reset,
	output reg clk_out
	 );
	parameter N = 1350000;

	reg [25:0] count;

	always@(posedge clk_in or posedge reset) begin
		if(reset)
			count <= 0;
		else if(count == (N-1))
			count <= 0;
		else
			count <= count + 1'b1;
	end

	always@(posedge clk_in or posedge reset) begin
		if(reset)
			clk_out <= 0;
		else if (count < (N>>1))
			clk_out <= 1'b1;
		else
			clk_out <= 1'b0; 
	end
endmodule

