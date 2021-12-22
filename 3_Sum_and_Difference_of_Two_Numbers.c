/*
Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

Declare 4 variables: two of type int and two of type float.
Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
Use the + and - operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int a, b;   //Create integer type variables
    float c, d; //Create float type variables

    //Take user input of double type and store it in the variables a and b
    scanf("%d", &a);
    scanf("%d", &b);

    //Take user input of float type and store it in the variable c and d
    scanf("%f", &c);
    scanf("%f", &d);

    printf("%d %d\n", (a+b), (a-b));    //Print out the sum and subtraction of values stored in 'a' and 'b'
    printf("%0.1f %0.1f", (c+d), (c-d));    //Print out the sum and subtraction of values stored in 'c' and 'd', and rounf the outputs upto 1 decimal places
    
    return 0;
}