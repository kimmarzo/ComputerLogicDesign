`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: CECS 201
// Engineer: Kim Marzo
// 
// Create Date:    12:22:49 03/04/2019 
// Design Name: Arithmetic Logic Design
// Module Name:    LAB2_VM 
// Project Name: Arithmetic Logic Design
// Target Devices: Spartan 6
// 
// Description: A verilog module for CECS 201 Lab 2 "Arithmetic Logic Design"
//
//
//////////////////////////////////////////////////////////////////////////////////
module LAB2_VM(
    input M,
    input A,
    input B,
    input Cin,
    output CB,
    output Y
    );

assign CB = {B   & {M ^ A}}|
				{Cin & {M ^ A}}|
				{B & Cin};
assign Y = A ^ B ^ Cin;

endmodule
