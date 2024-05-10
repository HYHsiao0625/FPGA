`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:21:30 05/11/2024 
// Design Name: 
// Module Name:    traffic_light 
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
module traffic_light(
	input clk_27M,
	input stopline,
	input reset,
	output R,
	output Y,
	output G,
	output W
	);

	reg [3:0] led_reg;
	reg [3:0] states;
	wire clk_1;
	
	freq_divider CLK_1hz(
		.clk_in(clk_27M),
		.reset(reset),
		.clk_out(clk_1));
		
	always @(posedge clk_1) begin
		if(reset)
			states <= 0;
		else if (states == 10)
			states <= 0;
		else
			states <= states + 1'b1;
		case (states)
			4'b0000 : {led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b0010;
			4'b0001 : {led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b0010;
			4'b0010 : {led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b0010;
			4'b0011 : {led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b0010;
			4'b0100 : {led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b0100;
			4'b0101 : 
				if (stopline)
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1001;
				else
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1000;
			4'b0110 :
				if (stopline)
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1001;
				else
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1000;
			4'b0111 :
				if (stopline)
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1001;
				else
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1000;
			4'b1000 :
				if (stopline)
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1001;
				else
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1000;
			4'b1001 :
				if (stopline)
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1001;
				else
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1000;
			4'b1010 :
				if (stopline)
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1001;
				else
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1000;
			default : {led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1111;
		endcase
	end
	assign R = led_reg[3];
	assign Y = led_reg[2];
	assign G = led_reg[1];
	assign W = led_reg[0];
endmodule
