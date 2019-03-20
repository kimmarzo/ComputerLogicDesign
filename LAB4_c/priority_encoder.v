`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: CECS 201
// Engineer: Kim Marzo
// 
// Create Date:    11:46:31 03/18/2019 
// Design Name: 4-bit priority encoder
// Target Devices: Spartan 6 
//
// Description: A verilog module that makes use of "structural modelling"
// for a 4 bit priority encoder with D[3:0] as inputs and D[3] as the MSB
// and outputs Y[1:0] and V where Y[0] and Y[1] are the binary code for the
// highest priority input and V is true whenever any of any input from D[3:0] 
// is asserted.
//////////////////////////////////////////////////////////////////////////////////

module priority_encoder(
    input [3:0] D,
    output [1:0] Y,
    output V
    );
	 wire W0;
	
		and a1 (W0, D[1], ~D[2]);
		
		or o1 (Y[1], D[2], D[3]),
			o2 (Y[0], W0, D[3]),
			o3 (V, D[0], D[1], D[2], D[3]);

endmodule
