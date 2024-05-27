`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:30:35 05/27/2024 
// Design Name: 
// Module Name:    stpper_motor 
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
module stpper_motor(
	input Direction,
	input reset,
	input clk_in,
	output [1:0] LED
	);
	
	wire clk_1;
	reg [1:0] led_reg = 2'b00;
	reg [1:0] states = 2'b00;
	
	freq_divider CLK_1hz(
		.clk_in(clk_in),
		.reset(reset),
		.clk_out(clk_1));
	
	always @(posedge clk_1) begin
		if	(reset)
			states <= 2'b00;
		if (Direction == 1'b0) begin
			if (states == 2'b11)
				states <= 2'b00;
			else if (states == 2'b00)
				states <= 2'b01;
			else if (states == 2'b01)
				states <= 2'b10;
			else if (states == 2'b10)
				states <= 2'b11;
		end else if (Direction == 1'b1) begin
			if (states == 2'b00)
				states <= 2'b11;
			else if (states == 2'b11)
				states <= 2'b10;
			else if (states == 2'b10)
				states <= 2'b01;
			else if (states == 2'b01)
				states <= 2'b00;
		end
		case (states)
			2'b00 : {led_reg} <= 2'b00;
			2'b01 : {led_reg} <= 2'b01;
			2'b10 : {led_reg} <= 2'b11;
			2'b11 : {led_reg} <= 2'b01;
			default : {led_reg} <= 2'b00;
		endcase		
	end
	assign LED = led_reg;
endmodule
