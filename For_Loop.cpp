/*
Input Format:
You will be given two positive integers,  and  (), separated by a newline.

Output Format:
For each integer n in the inclusive interval [a,b]:

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
*/

#include <iostream>
#include <cstdio>
using namespace std;

void printNum(int n)
{
    if (n == 1)
    {
        printf("one\n");
    }
    else if (n == 2)
    {
        printf("two\n");
    }
    else if (n == 3)
    {
        printf("three\n");
    }
    else if (n == 4)
    {
        printf("four\n");
    }
    else if (n == 5)
    {
        printf("five\n");
    }
    else if (n == 6)
    {
        printf("six\n");
    }
    else if (n == 7)
    {
        printf("seven\n");
    }
    else if (n == 8)
    {
        printf("eight\n");
    }
    else if (n == 9)
    {
        printf("nine\n");
    }
    else if (n > 9)
    {
        if (n % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
}

int main()
{
    int a, b;
    //Take user input
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)  //If a>b, the entire program will have no meaning
    {
        return 1;
    }
    else if (a == b)    //If a and b has same values, then we just have to print the output without any incrementation
    {
        printNum(a);
    }
    else
    {
        for (int i = a; i < (b + 1); i++)
        {
            printNum(i);
        }
    }

    return 0;
}