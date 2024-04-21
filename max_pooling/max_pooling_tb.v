`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:13:12 04/21/2024
// Design Name:   max_pooling
// Module Name:   /home/yuan/Desktop/fgpa/max_pooling/max_pooling_tb.v
// Project Name:  max_pooling
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: max_pooling
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module max_pooling_tb;

	// Inputs
	reg [3:0] dataIN0_0;
	reg [3:0] dataIN0_1;
	reg [3:0] dataIN0_2;
	reg [3:0] dataIN0_3;
	reg [3:0] dataIN1_0;
	reg [3:0] dataIN1_1;
	reg [3:0] dataIN1_2;
	reg [3:0] dataIN1_3;
	reg [3:0] dataIN2_0;
	reg [3:0] dataIN2_1;
	reg [3:0] dataIN2_2;
	reg [3:0] dataIN2_3;
	reg [3:0] dataIN3_0;
	reg [3:0] dataIN3_1;
	reg [3:0] dataIN3_2;
	reg [3:0] dataIN3_3;
	reg clk;

	// Outputs
	wire [3:0] dataOUT0_0;
	wire [3:0] dataOUT0_1;
	wire [3:0] dataOUT1_0;
	wire [3:0] dataOUT1_1;

	// Instantiate the Unit Under Test (UUT)
	max_pooling uut (
		.dataIN0_0(dataIN0_0), 
		.dataIN0_1(dataIN0_1), 
		.dataIN0_2(dataIN0_2), 
		.dataIN0_3(dataIN0_3), 
		.dataIN1_0(dataIN1_0), 
		.dataIN1_1(dataIN1_1), 
		.dataIN1_2(dataIN1_2), 
		.dataIN1_3(dataIN1_3), 
		.dataIN2_0(dataIN2_0), 
		.dataIN2_1(dataIN2_1), 
		.dataIN2_2(dataIN2_2), 
		.dataIN2_3(dataIN2_3), 
		.dataIN3_0(dataIN3_0), 
		.dataIN3_1(dataIN3_1), 
		.dataIN3_2(dataIN3_2), 
		.dataIN3_3(dataIN3_3), 
		.clk(clk), 
		.dataOUT0_0(dataOUT0_0), 
		.dataOUT0_1(dataOUT0_1), 
		.dataOUT1_0(dataOUT1_0), 
		.dataOUT1_1(dataOUT1_1)
	);

	initial begin
		// Initialize Inputs
		dataIN0_0 = 2;
		dataIN0_1 = 0;
		dataIN0_2 = 2;
		dataIN0_3 = 1;
		dataIN1_0 = 6;
		dataIN1_1 = 3;
		dataIN1_2 = 8;
		dataIN1_3 = 7;
		dataIN2_0 = 3;
		dataIN2_1 = 4;
		dataIN2_2 = 0;
		dataIN2_3 = 1;
		dataIN3_0 = 2;
		dataIN3_1 = 1;
		dataIN3_2 = 5;
		dataIN3_3 = 2;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #100 clk = ~clk;
endmodule

