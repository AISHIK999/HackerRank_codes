/*
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
*/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d) //Create four integer type variables
{
    int e, f;   //Create two integer type variables
    // Between the values stored in 'a' and 'b', whichever one is greater, gets stored in the variable 'e'
    if (a>=b)
    {
        e = a;
    }
    else
    {
        e = b;
    }

    // Between the values stored in 'c' and 'd', whichever one is greater, gets stored in the variable 'f'
    if (c>=d)
    {
        f = c;
    }
    else
    {
        f =d;
    }    

    //Between the values stored in 'e' and 'f', whichever one is greater, gets returned at the end of the function, thus reurning the greatest value between a, b and c, d
    if(e>=f)
    {
        return e;
    }
    else
    {
        return f;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);   //Takes user input for the four numbers
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);  //Prints out the value returned form the 'max_of_four' function, i.e, greatest of the four numbers
    
    return 0;
}