`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:58:28 03/04/2019
// Design Name:   LAB2_VM
// Module Name:   C:/Users/Kim Marzo/Desktop/CS_S19/CECS201/LAB2/LAB2_TF.v
// Project Name:  LAB2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LAB2_VM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module LAB2_TF;

	// Inputs
	reg M;
	reg A;
	reg B;
	reg Cin;

	// Outputs
	wire CB;
	wire Y;

	// Instantiate the Unit Under Test (UUT)
	LAB2_VM uut (
		.M(M), 
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.CB(CB), 
		.Y(Y)
	);

	initial begin
		{M,A,B,Cin} = 4'b0000; #10;
		{M,A,B,Cin} = 4'b0001; #10;
		{M,A,B,Cin} = 4'b0010; #10;
		{M,A,B,Cin} = 4'b0011; #10;
		{M,A,B,Cin} = 4'b0100; #10;
		{M,A,B,Cin} = 4'b0101; #10;
		{M,A,B,Cin} = 4'b0110; #10;
		{M,A,B,Cin} = 4'b0111; #10;
		{M,A,B,Cin} = 4'b1000; #10;
		{M,A,B,Cin} = 4'b1001; #10;
		{M,A,B,Cin} = 4'b1010; #10;
		{M,A,B,Cin} = 4'b1011; #10;
		{M,A,B,Cin} = 4'b1100; #10;
		{M,A,B,Cin} = 4'b1101; #10;
		{M,A,B,Cin} = 4'b1110; #10;
		{M,A,B,Cin} = 4'b1111; #10;
		{M,A,B,Cin} = 4'b0000; #10;
		$finish;

	end
      
endmodule

