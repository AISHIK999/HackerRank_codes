/*
Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

*/
#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
    //Declare the variables
    int a;
    long b;
    char c;
    float d;
    double e;

    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);  //Scan the user inputs
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf\n", a, b, c, d, e);  //Print the inputs provided on a separate line

    return 0;
}