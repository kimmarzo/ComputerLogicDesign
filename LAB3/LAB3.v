`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: CECS 201
// Engineer: Kim Marzo
// 
// Create Date:    16:00:39 03/04/2019 
// Design Name: CECS 201
// Module Name:    LAB3 
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
module LAB3(
    input M,
    input [3:0] A,
    input [3:0] B ,
    input Cin,
    output [3:0] Y ,
    output CB
    );
wire C0, C1, C2;

LAB2_VM as0 (M, A[0], B[0], Cin, Y[0], C0),
		  as1 (M, A[1], B[1], C0, Y[1], C1),
		  as2 (M, A[2], B[2], C1, Y[2], C2),
		  as3 (M, A[3], B[3], C2, Y[3], CB);

endmodule
