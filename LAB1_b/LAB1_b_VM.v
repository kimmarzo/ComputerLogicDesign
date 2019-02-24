`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:57:17 02/24/2019 
// Design Name: 
// Module Name:    LAB1_b_VM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module LAB1_b_VM(
    input W,
    input X,
    input Y,
    input Z,
    output F1
    );

	wire W1,W2,W3,W4;
	
	nand n1( W1, X, ~Y, ~Z),
		  n2( W2, W, ~Y,  Z),
		  n3( W3, ~X, Y, Z),
		  n4( W4, ~W, X, Y),
		  n5( F1, W1, W2, W3, W4);
		  

endmodule
