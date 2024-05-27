`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:45:25 05/27/2024
// Design Name:   stpper_motor
// Module Name:   /home/yuan/Desktop/FPGA/stepper_moter/stepper_motor_tb.v
// Project Name:  stepper_moter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: stpper_motor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module stepper_motor_tb;

	// Inputs
	reg Direction;
	reg reset;
	reg clk_in;

	// Outputs
	wire [1:0] LED;

	// Instantiate the Unit Under Test (UUT)
	stpper_motor uut (
		.Direction(Direction), 
		.reset(reset), 
		.clk_in(clk_in), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		Direction = 0;
		reset = 1;
		clk_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      reset = 0;
		// Add stimulus here
		#150;
		Direction = 1;
		#600;
		Direction = 0;
	end
   always #100 clk_in = ~clk_in;
endmodule

