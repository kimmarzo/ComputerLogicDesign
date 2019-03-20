`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:48:38 03/18/2019
// Design Name:   priority_encoder
// Module Name:   C:/Users/Kim Marzo/Desktop/CS_S19/CECS201/LAB4_c/priority_encoder_TF.v
// Project Name:  LAB4_c
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: priority_encoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module priority_encoder_TF;

	// Inputs
	reg [3:0] D;

	// Outputs
	wire [1:0] Y;
	wire V;

	// Instantiate the Unit Under Test (UUT)
	priority_encoder uut (
		.D(D), 
		.Y(Y), 
		.V(V)
	);

	initial begin
		{D[3],D[2],D[1],D[0]} = 4'b0000; #10;
		{D[3],D[2],D[1],D[0]} = 4'b0001; #10;
		{D[3],D[2],D[1],D[0]} = 4'b0010; #10;
		{D[3],D[2],D[1],D[0]} = 4'b0011; #10;
		{D[3],D[2],D[1],D[0]} = 4'b0100; #10;
		{D[3],D[2],D[1],D[0]} = 4'b0101; #10;
		{D[3],D[2],D[1],D[0]} = 4'b0110; #10;
		{D[3],D[2],D[1],D[0]} = 4'b0111; #10;
		{D[3],D[2],D[1],D[0]} = 4'b1000; #10;
		{D[3],D[2],D[1],D[0]} = 4'b1001; #10;
		{D[3],D[2],D[1],D[0]} = 4'b1010; #10;
		{D[3],D[2],D[1],D[0]} = 4'b1011; #10;
		{D[3],D[2],D[1],D[0]} = 4'b1100; #10;
		{D[3],D[2],D[1],D[0]} = 4'b1101; #10;
		{D[3],D[2],D[1],D[0]} = 4'b1110; #10;
		{D[3],D[2],D[1],D[0]} = 4'b1111; #10;
		{D[3],D[2],D[1],D[0]} = 4'b0000; #10;
		
		
		$finish;

	end
      
endmodule

