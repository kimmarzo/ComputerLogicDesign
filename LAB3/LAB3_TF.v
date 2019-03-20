`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:16:14 03/04/2019
// Design Name:   LAB3
// Module Name:   C:/Users/Kim Marzo/Desktop/CS_S19/CECS201/LAB3/LAB3_TF.v
// Project Name:  LAB3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LAB3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module LAB3_TF;

	// Inputs
	reg M;
	reg [3:0] A;
	reg [3:0] B;
	reg Cin;

	// Outputs
	wire [3:0] Y;
	wire CB;

	// Instantiate the Unit Under Test (UUT)
	LAB3 uut (
		.M(M), 
		.A(A), 
		.Cin(Cin),
		.B(B), 
		.Y(Y), 
		.CB(CB)
	);

	initial begin
		{Cin,M,A,B}= 10'h0_0_8_7; #10; 
		{Cin,M,A,B}= 10'h0_0_A_8; #10; 
		{Cin,M,A,B}= 10'h0_0_6_D; #10; 
		{Cin,M,A,B}= 10'h0_0_E_E; #10; 
		{Cin,M,A,B}= 10'h0_0_C_4; #10; 
		{Cin,M,A,B}= 10'h0_1_9_5; #10; 
		{Cin,M,A,B}= 10'h0_1_D_E; #10; 
		{Cin,M,A,B}= 10'h0_1_7_2; #10; 
		{Cin,M,A,B}= 10'h0_1_6_F; #10; 
		{Cin,M,A,B}= 10'h0_1_1_9; #10; 
	$finish;
		
	end
      
endmodule

