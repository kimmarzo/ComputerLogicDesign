`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:58:45 03/11/2019
// Design Name:   LAB3_b
// Module Name:   C:/Users/Kim Marzo/Desktop/CS_S19/CECS201/LAB3_b/LAB3_B_TF.v
// Project Name:  LAB3_b
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LAB3_b
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module LAB3_B_TF;

	// Inputs
	reg M;
	reg [3:0] A;
	reg [3:0] B;
	reg Cin;

	// Outputs
	wire CB;
	wire [3:0] Y;

	// Instantiate the Unit Under Test (UUT)
	LAB3_b uut (
		.M(M), 
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.CB(CB), 
		.Y(Y)
	);

	initial begin
		{M,A,B,Cin} = 10'b0_1000_0111_0; #10;
		{M,A,B,Cin} = 10'b0_1010_1000_0; #10;
		{M,A,B,Cin} = 10'b0_0110_1101_0; #10;
		{M,A,B,Cin} = 10'b0_1110_1110_0; #10;
		{M,A,B,Cin} = 10'b0_1100_0100_0; #10;
		{M,A,B,Cin} = 10'b1_1001_0101_0; #10;
		{M,A,B,Cin} = 10'b1_1101_1110_0; #10;
		{M,A,B,Cin} = 10'b1_0111_0010_0; #10;
		{M,A,B,Cin} = 10'b1_0110_1111_0; #10;
		{M,A,B,Cin} = 10'b1_0001_1001_0; #10;
		{M,A,B,Cin} = 10'b1_0000_0000_0; #10;
		
		$finish;
	end
      
endmodule

