`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: CECS 201
// Engineer: Kim Marzo
// 
// Create Date:    02:52:05 03/11/2019 
// Module Name:    LAB3_b 
// Project Name: Heirarchial Logic Design
// Target Devices: Spartan 6
// Description: A verilog module that adds / subtract two 4-bit binary numbers
//
//////////////////////////////////////////////////////////////////////////////////
module LAB3_b(
    input M,
    input [3:0] A,
    input [3:0] B,
    input Cin,
    output CB,
    output [3:0] Y
    );

wire C0, C1, C2;

LAB2_VM as0(M, A[0], B[0], 0, C0, Y[0]),
		  as1(M, A[1], B[1], C0, C1, Y[1]),
		  as2(M, A[2], B[2], C1, C2, Y[2]),
		  as3(M, A[3], B[3], C2, CB, Y[3]);

endmodule
