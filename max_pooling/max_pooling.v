`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:04:24 04/21/2024 
// Design Name: 
// Module Name:    max_pooling 
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
module max_pooling(
	input [3:0] dataIN0_0,
	input [3:0] dataIN0_1,
	input [3:0] dataIN0_2,
	input [3:0] dataIN0_3,
	input [3:0] dataIN1_0,
	input [3:0] dataIN1_1,
	input [3:0] dataIN1_2,
	input [3:0] dataIN1_3,
	input [3:0] dataIN2_0,
	input [3:0] dataIN2_1,
	input [3:0] dataIN2_2,
	input [3:0] dataIN2_3,
	input [3:0] dataIN3_0,
	input [3:0] dataIN3_1,
	input [3:0] dataIN3_2,
	input [3:0] dataIN3_3,

	input clk,

	output [3:0] dataOUT0_0,
	output [3:0] dataOUT0_1,
	output [3:0] dataOUT1_0,
	output [3:0] dataOUT1_1
	);
	
	reg [3:0] reg_data [15:0];
	reg [3:0] reg_out [3:0];
	reg [3:0] max_value_0 = 0;
	reg [3:0] max_value_1 = 0;
	reg [3:0] max_value_2 = 0;
	reg [3:0] max_value_3 = 0;
	
	always @(posedge clk) begin
		reg_data[0] <= dataIN0_0;
		reg_data[1] <= dataIN0_1;
		reg_data[2] <= dataIN0_2;
		reg_data[3] <= dataIN0_3;
		reg_data[4] <= dataIN1_0;
		reg_data[5] <= dataIN1_1;
		reg_data[6] <= dataIN1_2;
		reg_data[7] <= dataIN1_3;
		reg_data[8] <= dataIN2_0;
		reg_data[9] <= dataIN2_1;
		reg_data[10] <= dataIN2_2;
		reg_data[11] <= dataIN2_3;
		reg_data[12] <= dataIN3_0;
		reg_data[13] <= dataIN3_1;
		reg_data[14] <= dataIN3_2;
		reg_data[15] <= dataIN3_3;
		if (reg_data[0] > max_value_0) begin
			max_value_0 <= reg_data[0];
		end
		if(reg_data[1] > max_value_0) begin
			max_value_0 <= reg_data[1];
		end
		if(reg_data[4] > max_value_0) begin
			max_value_0 <= reg_data[4];
		end
		if(reg_data[5] > max_value_0) begin
			max_value_0 <= reg_data[5];
		end
		reg_out[0] <= max_value_0;
		
		if (reg_data[2] > max_value_1) begin
			max_value_1 <= reg_data[2];
		end
		if(reg_data[3] > max_value_1) begin
			max_value_1 <= reg_data[3];
		end
		if(reg_data[6] > max_value_1) begin
			max_value_1 <= reg_data[6];
		end
		if(reg_data[7] > max_value_1) begin
			max_value_1 <= reg_data[7];
		end
		reg_out[1] <= max_value_1;
		
		if (reg_data[8] > max_value_2) begin
			max_value_2 <= reg_data[8];
		end
		if(reg_data[9] > max_value_2) begin
			max_value_2 <= reg_data[9];
		end
		if(reg_data[12] > max_value_2) begin
			max_value_2 <= reg_data[12];
		end
		if(reg_data[13] > max_value_2) begin
			max_value_2 <= reg_data[13];
		end
		reg_out[2] <= max_value_2;
		
		if (reg_data[10] > max_value_3) begin
			max_value_3 <= reg_data[10];
		end
		if(reg_data[11] > max_value_3) begin
			max_value_3 <= reg_data[11];
		end
		if(reg_data[14] > max_value_3) begin
			max_value_3 <= reg_data[14];
		end
		if(reg_data[15] > max_value_3) begin
			max_value_3 <= reg_data[15];
		end
		reg_out[3] <= max_value_3;
	end
	
	assign dataOUT0_0 = reg_out[0];
	assign dataOUT0_1 = reg_out[1];
	assign dataOUT1_0 = reg_out[2];
	assign dataOUT1_1 = reg_out[3];
endmodule
