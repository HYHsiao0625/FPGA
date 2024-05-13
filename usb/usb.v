`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:45:46 05/13/2024 
// Design Name: 
// Module Name:    usb 
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
module usb(
	input [3:0] IO_mode,
	input [3:0] IO_input,
	input clk,
	input reset,
	output [3:0] LED
	);
	
	reg [3:0] led_reg;
	reg [3:0] mode_states;
	reg [3:0] true_states = 4'b0000;
	reg [3:0] false_states = 4'b0000;
	reg isRunning = 1'b0;
	reg isCorrect = 1'b0;
	reg mode = 1'b0;
	wire clk_1;
	
	freq_divider CLK_1hz(
		.clk_in(clk),
		.reset(reset),
		.clk_out(clk_1));
		
	always @(posedge clk) begin
		if(reset) begin
			mode <= 1'b0;
			isRunning <= 1'b0;
			isCorrect <= 1'b0;
			true_states <= 4'b0000;
			false_states <= 4'b0000;
		end else if (IO_mode == 4'b1001) begin
			mode <= 1'b1;
			false_states <= 4'b0000;
		end else begin
			mode <= 1'b0;
			true_states <= 4'b0000;
		end
		
		if (mode == 1 && isRunning == 0) begin
			isRunning <= 1'b1;
		end else if (mode == 0 && isRunning == 0) begin
			isRunning <= 1'b1;
		end
		
		if (mode == 1 && isRunning == 1 || true_states != 4'b0000) begin
			if (true_states < 8)
				true_states <= true_states + 1'b1;
			else if (true_states == 8) begin
				true_states <= 0;
				isRunning <= 1'b0;
				isCorrect <= 1'b1;
			end
			case (true_states)
			4'b0000 : {led_reg} <= 4'b0000;
			4'b0001 : {led_reg} <= 4'b0001;
			4'b0010 : {led_reg} <= 4'b0010;
			4'b0011 : {led_reg} <= 4'b0100;
			4'b0100 : {led_reg} <= 4'b1000;
			4'b0101 : {led_reg} <= 4'b0100;
			4'b0110 : {led_reg} <= 4'b0010;
			4'b0111 : {led_reg} <= 4'b0001;
			4'b1000 : {led_reg} <= 4'b0000;
			default : {led_reg} <= 4'b1111;
			endcase
		end else if (mode == 0 && isRunning == 1 || false_states != 4'b0000) begin
			if(false_states < 6)
				false_states <= false_states + 1'b1;
			else if (false_states == 6)begin
				false_states <= 0;
				isRunning <= 1'b0;
			end
			case (false_states)
				4'b0000 : {led_reg} <= 4'b0000;
				4'b0001 : {led_reg} <= 4'b1111;
				4'b0010 : {led_reg} <= 4'b0000;
				4'b0011 : {led_reg} <= 4'b1111;
				4'b0100 : {led_reg} <= 4'b0000;
				4'b0101 : {led_reg} <= 4'b1111;
				4'b0110 : {led_reg} <= 4'b0000;
				default : {led_reg} <= 4'b1010;
			endcase
		end
		if (isCorrect)
			case (IO_input)
				4'b0000 : {led_reg} <= 4'b0000;
				4'b0001 : {led_reg} <= 4'b0001;
				4'b0010 : {led_reg} <= 4'b0010;
				4'b0011 : {led_reg} <= 4'b0011;
				4'b0100 : {led_reg} <= 4'b0100;
				4'b0101 : {led_reg} <= 4'b0101;
				4'b0110 : {led_reg} <= 4'b0110;
				4'b0111 : {led_reg} <= 4'b0111;
				4'b1000 : {led_reg} <= 4'b1000;
				4'b1001 : {led_reg} <= 4'b1001;
				4'b1010 : {led_reg} <= 4'b1010;
				4'b1011 : {led_reg} <= 4'b1011;
				4'b1100 : {led_reg} <= 4'b1100;
				4'b1101 : {led_reg} <= 4'b1101;
				4'b1110 : {led_reg} <= 4'b1110;
				4'b1111 : {led_reg} <= 4'b1111;
				default : {led_reg} <= 4'b0000;
			endcase
	end
	assign LED = led_reg;
	
endmodule
