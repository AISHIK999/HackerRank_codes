/*
Given a five digit integer, print the sum of its digits.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum = 0, rem, unit; //Create 3 integer type variables, out of which, the 'sum' variable stores the value '0'

    while (n>0)
    {
        unit = n%10;    //Take the quotient when the value stored in 'n' is divided by 10
        sum += unit;    //Add the value stored in unit into the value stored in 'sum' variable and thereby gradually increment it
        n = n/10;   //Reduce the length of the integer value stored in 'n' by one digit
    }
    printf("%d", sum);

    return 0;
}