`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:01:57 05/20/2024
// Design Name:   vedic_multiplier
// Module Name:   /home/yuan/Desktop/FPGA/vedic_multiplier/vedic_multiplier_tb.v
// Project Name:  vedic_multiplier
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vedic_multiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module vedic_multiplier_tb;

	// Inputs
	reg [1:0] A;
	reg [1:0] B;

	// Outputs
	wire [3:0] P;

	// Instantiate the Unit Under Test (UUT)
	vedic_multiplier uut (
		.A(A), 
		.B(B), 
		.P(P)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	end
	always #100 A[0] = ~A[0];
	always #200 A[1] = ~A[1];
	always #400 B[0] = ~B[0];
	always #800 B[1] = ~B[1];
      
endmodule

