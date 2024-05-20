`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:37:20 05/20/2024 
// Design Name: 
// Module Name:    vedic_multiplier 
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
module vedic_multiplier(
	input [1:0] A,
	input [1:0] B,
	output [3:0] P
	);
	

	assign P[0] = A[0] & B[0];
	assign P[1] = (A[1] & B[0]) ^ (A[0] & B[1]);
	assign P[2] = (A[1] & B[1]) ^ (A[1] & B[0]) & (A[0] & B[1]);
	assign P[3] = (A[1] & B[1]) & (A[1] & B[0]) & (A[0] & B[1]);
	
endmodule
