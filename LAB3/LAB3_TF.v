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
		.B(B), 
		.Cin(Cin), 
		.Y(Y), 
		.CB(CB)
	);

	initial begin
		{M,A,B,Cin}= 10'b0_1000_011_0; //CB = 0 Y = 1111 
		{M,A,B,Cin} = 10'b0_1010_1000_0; //CB = 
	end
      
endmodule

