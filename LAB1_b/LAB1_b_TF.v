`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:00:27 02/24/2019
// Design Name:   LAB1_b_VM
// Module Name:   C:/Users/Kim Marzo/Desktop/CECS201/LAB1_b/LAB1_b_TF.v
// Project Name:  LAB1_b
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LAB1_b_VM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module LAB1_b_TF;

	// Inputs
	reg W;
	reg X;
	reg Y;
	reg Z;

	// Outputs
	wire F1;

	// Instantiate the Unit Under Test (UUT)
	LAB1_b_VM uut (
		.W(W), 
		.X(X), 
		.Y(Y), 
		.Z(Z), 
		.F1(F1)
	);

	initial begin
		{W,X,Y,Z} = 4'b0000; #10;
		{W,X,Y,Z} = 4'b0001; #10;
		{W,X,Y,Z} = 4'b0010; #10;
		{W,X,Y,Z} = 4'b0011; #10;
		{W,X,Y,Z} = 4'b0100; #10;
		{W,X,Y,Z} = 4'b0101; #10;
		{W,X,Y,Z} = 4'b0110; #10;
		{W,X,Y,Z} = 4'b0111; #10;
		{W,X,Y,Z} = 4'b1000; #10;
		{W,X,Y,Z} = 4'b1001; #10;
		{W,X,Y,Z} = 4'b1010; #10;
		{W,X,Y,Z} = 4'b1011; #10;
		{W,X,Y,Z} = 4'b1100; #10;
		{W,X,Y,Z} = 4'b1101; #10;
		{W,X,Y,Z} = 4'b1110; #10;
		{W,X,Y,Z} = 4'b1111; #10;
		{W,X,Y,Z} = 4'b0000; #10;
      $finish;
		// Add stimulus here

	end
      
endmodule

