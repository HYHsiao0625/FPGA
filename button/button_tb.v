`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:04:56 05/06/2024
// Design Name:   button
// Module Name:   /home/yuan/Desktop/fgpa/button/button_tb.v
// Project Name:  button
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: button
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module button_tb;

	// Inputs
	reg BUTTON0;
	reg BUTTON1;
	reg BUTTON2;
	reg BUTTON3;
	reg clk;
	reg reset;
	
	// Outputs
	wire LED0;
	wire LED1;
	wire LED2;
	wire LED3;

	// Instantiate the Unit Under Test (UUT)
	button uut (
		.BUTTON0(BUTTON0), 
		.BUTTON1(BUTTON1), 
		.BUTTON2(BUTTON2), 
		.BUTTON3(BUTTON3), 
		.clk(clk), 
		.reset(reset),
		.LED0(LED0), 
		.LED1(LED1), 
		.LED2(LED2), 
		.LED3(LED3)
	);

	initial begin
		// Initialize Inputs
		BUTTON0 = 0;
		BUTTON1 = 0;
		BUTTON2 = 0;
		BUTTON3 = 0;
		clk = 0;
		reset = 1;
		
		// Wait 100 ns for global reset to finish
		#50;
      reset = 0;
		
		// Add stimulus here
		#100;
		BUTTON3 <= 0;
		BUTTON2 <= 0;
		BUTTON1 <= 0;
		BUTTON0 <= 1;
		#100;
		BUTTON3 <= 0;
		BUTTON2 <= 0;
		BUTTON1 <= 1;
		BUTTON0 <= 0;
		#100;
		BUTTON3 <= 0;
		BUTTON2 <= 1;
		BUTTON1 <= 0;
		BUTTON0 <= 0;
		#100;
		BUTTON3 <= 1;
		BUTTON2 <= 0;
		BUTTON1 <= 0;
		BUTTON0 <= 0;
		#100;
		BUTTON3 <= 0;
		BUTTON2 <= 0;
		BUTTON1 <= 0;
		BUTTON0 <= 0;
		#100;
		BUTTON3 <= 1;
		BUTTON2 <= 0;
		BUTTON1 <= 0;
		BUTTON0 <= 1;

	end
	always #1 clk = ~clk;
endmodule

