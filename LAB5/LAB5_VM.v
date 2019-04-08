`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: CECS 201
// Engineer: KIM MARZO
// 
// Create Date:    03:34:57 03/25/2019 
// Design Name: Binary to Seven Segment Display
// Module Name:    LAB5_VM 
// Target Devices: Spartan 6
// Description: A behavioral verilog module for a hex to seven segment decoder 
//////////////////////////////////////////////////////////////////////////////////
module LAB5_VM(hex, a, b, c, d, e, f, g, anodes
    );

	input [3:0] hex;
	output a, b, c, d, e, f, g;
	output [3:0] anodes;
	reg a, b, c, d, e, f, g;
	wire [3:0] anodes;
	
		always @ (hex) begin
			case (hex)
				4'b0000: {a,b,c,d,e,f,g} = 7'b0000001;
				4'b0001: {a,b,c,d,e,f,g} = 7'b1001111;
				4'b0010: {a,b,c,d,e,f,g} = 7'b0010010;
				4'b0011: {a,b,c,d,e,f,g} = 7'b0000110;
				4'b0100: {a,b,c,d,e,f,g} = 7'b1001100;
				4'b0101: {a,b,c,d,e,f,g} = 7'b0100100;
				4'b0110: {a,b,c,d,e,f,g} = 7'b0100000;
				4'b0111: {a,b,c,d,e,f,g} = 7'b0001111;
				4'b1000: {a,b,c,d,e,f,g} = 7'b0000000;
				4'b1001: {a,b,c,d,e,f,g} = 7'b0001100;
				4'b1010: {a,b,c,d,e,f,g} = 7'b0001000;
				4'b1011: {a,b,c,d,e,f,g} = 7'b1100000;
				4'b1100: {a,b,c,d,e,f,g} = 7'b0110001;
				4'b1101: {a,b,c,d,e,f,g} = 7'b1000010;
				4'b1110: {a,b,c,d,e,f,g} = 7'b0110000;
				4'b1111: {a,b,c,d,e,f,g} = 7'b0111000;
				default: {a,b,c,d,e,f,g} = 7'b1111111;
			endcase
		end
		
		assign anodes = 4'b1110;	


endmodule
