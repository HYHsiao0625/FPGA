`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:52:11 05/06/2024
// Design Name:   freq_divider
// Module Name:   /home/yuan/Desktop/fgpa/button/freq_divider_tb.v
// Project Name:  button
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: freq_divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module freq_divider_tb;

	// Inputs
	reg clk_in;
	reg reset;

	// Outputs
	wire clk_out;

	// Instantiate the Unit Under Test (UUT)
	freq_divider uut (
		.clk_in(clk_in), 
		.reset(reset), 
		.clk_out(clk_out)
	);

	initial begin
		// Initialize Inputs
		clk_in = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
      reset = 1;
		#100;
		reset = 0;
		// Add stimulus here

	end
   always #1 clk_in = ~clk_in;
endmodule

