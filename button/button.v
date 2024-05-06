`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:51:40 05/05/2024 
// Design Name: 
// Module Name:    button 
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
module button(
	input BUTTON0,
	input BUTTON1,
	input BUTTON2,
	input BUTTON3,
	input clk,
	input reset,
	output LED0,
	output LED1,
	output LED2,
	output LED3
	); 
	
	reg led_reg [3:0];
	wire clk_1;
	
	freq_divider clk_1hz(
		.clk_in(clk),
		.reset(reset),
		.clk_out(clk_1));
		
	always @(posedge clk) begin
		case ({BUTTON3, BUTTON2, BUTTON1, BUTTON0})
			4'b0001 : {led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b0001;
			4'b0010 : {led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b0010;
			4'b0100 : {led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b0100;
			4'b1000 : {led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1000;
			4'b1001 : 
				if (!clk_1)
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b1001;
				else 
					{led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b0000;
			default: {led_reg[3], led_reg[2], led_reg[1], led_reg[0]} <= 4'b0000;
		endcase
	end
	
	assign LED3 = led_reg[3];
	assign LED2 = led_reg[2];
	assign LED1 = led_reg[1];
	assign LED0 = led_reg[0];
endmodule
