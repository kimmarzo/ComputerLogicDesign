`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: CECS 201
// Engineer: Kim Marzo
// 
// Create Date:    16:00:39 03/04/2019 
// Design Name: CECS 201
// Module Name:    LAB3 
// Project Name: Hierarchial Logic Design
// Target Devices: Spartan 6
// 
// Description: A module for 2 4-bit binary adder / subtractor
//////////////////////////////////////////////////////////////////////////////////
module LAB3(
    input M,
    input [3:0] A,
	 input Cin,
    input [3:0] B,
    output [3:0] Y,
	 output CB


    );
wire C0, C1, C2;

LAB2_VM as0 (M, A[0], B[0], 0, C0, Y[0]),
		  as1 (M, A[1], B[1], C0, C1, Y[1]),
		  as2 (M, A[2], B[2], C1, C2, Y[2]),
		  as3 (M, A[3], B[3], C2, CB, Y[3]);

endmodule
