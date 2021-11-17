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
	
    int a, b;
    float c, d;

    scanf("%d", &a);
    scanf("%d", &b);

    scanf("%f", &c);
    scanf("%f", &d);

    printf("%d %d\n", (a+b), (a-b));
    printf("%0.1f %0.1f", (c+d), (c-d));
    
    return 0;
}