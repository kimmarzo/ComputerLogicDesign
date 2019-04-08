`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:46:26 03/25/2019
// Design Name:   LAB5_VM
// Module Name:   C:/Users/Kim Marzo/Desktop/CS_S19/CECS201/LAB5/LAB5_TF.v
// Project Name:  LAB5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LAB5_VM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module LAB5_TF;

	// Inputs
	reg [3:0] hex;

	// Outputs
	wire a;
	wire b;
	wire c;
	wire d;
	wire e;
	wire f;
	wire g;
	wire [3:0] anodes;

	// Instantiate the Unit Under Test (UUT)
	LAB5_VM uut (
		.hex(hex), 
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.f(f), 
		.g(g), 
		.anodes(anodes)
	);

	initial begin
		hex [3:0] = 4'b0000; #10;
		hex [3:0] = 4'b0001; #10;
		hex [3:0] = 4'b0010; #10;
		hex [3:0] = 4'b0011; #10;
		hex [3:0] = 4'b0100; #10;
		hex [3:0] = 4'b0101; #10;
		hex [3:0] = 4'b0110; #10;
		hex [3:0] = 4'b0111; #10;
		hex [3:0] = 4'b1000; #10;
		hex [3:0] = 4'b1001; #10;
		hex [3:0] = 4'b1010; #10;
		hex [3:0] = 4'b1011; #10;
		hex [3:0] = 4'b1100; #10;
		hex [3:0] = 4'b1101; #10;
		hex [3:0] = 4'b1110; #10;
		hex [3:0] = 4'b1111; #10;
		hex [3:0] = 4'b0000; #10;
		
		
		$finish;

	end
      
endmodule

