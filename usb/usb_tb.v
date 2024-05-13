`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:07:16 05/13/2024
// Design Name:   usb
// Module Name:   /home/yuan/Desktop/FPGA/usb/usb_tb.v
// Project Name:  usb
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: usb
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module usb_tb;

	// Inputs
	reg [3:0] IO_mode;
	reg [3:0] IO_input;
	reg clk;
	reg reset;

	// Outputs
	wire [3:0] LED;

	// Instantiate the Unit Under Test (UUT)
	usb uut (
		.IO_mode(IO_mode), 
		.IO_input(IO_input), 
		.clk(clk), 
		.reset(reset), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		IO_mode = 0;
		IO_input = 0;
		clk = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#50;
        
		// Add stimulus here
		reset = 0;
		#100;
		IO_mode = 4'b1001;
		#1200;
		IO_mode = 4'b1111;
		#800;
		reset = 1;
		#50;
		reset = 0;
		#1800;
		IO_mode = 4'b1001;
	end
   always #50 clk = ~clk;
	always #100 IO_input[0] = ~IO_input[0];
	always #200 IO_input[1] = ~IO_input[1];
	always #400 IO_input[2] = ~IO_input[2];
	always #800 IO_input[3] = ~IO_input[3];
endmodule

