`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:37:29 05/11/2024
// Design Name:   traffic_light
// Module Name:   /home/yuan/Desktop/FPGA/traffic_light/traffic_light_tb.v
// Project Name:  traffic_light
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: traffic_light
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module traffic_light_tb;

	// Inputs
	reg clk_27M;
	reg stopline;
	reg reset;

	// Outputs
	wire R;
	wire Y;
	wire G;
	wire W;

	// Instantiate the Unit Under Test (UUT)
	traffic_light uut (
		.clk_27M(clk_27M), 
		.stopline(stopline), 
		.reset(reset), 
		.R(R), 
		.Y(Y), 
		.G(G), 
		.W(W)
	);

	initial begin
		// Initialize Inputs
		clk_27M = 0;
		stopline = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#100;
      reset = 0;
		// Add stimulus here

	end
   always #100 clk_27M = ~clk_27M;
endmodule

