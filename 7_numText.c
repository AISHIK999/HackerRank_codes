/*
Given a positive integer denoting n, do the following:

If 1 <= n <= 9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
If n > 9, print Greater than 9.
*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);
    if(num >= 1 && num <= 9)
    {
        if (num == 1)
        {
            printf("one");
        }
        else if (num == 2)
        {
            printf("two");
        }
        else if (num == 3)
        {
            printf("three");
        }
        else if (num == 4)
        {
            printf("four");
        }
        else if (num == 5)
        {
            printf("five");
        }
        else if (num == 6)
        {
            printf("six");
        }
        else if (num == 7)
        {
            printf("seven");
        }
        else if (num == 8)
        {
            printf("eight");
        }
        else if (num == 9)
        {
            printf("nine");
        }    
    }
    else if (num > 9)
    {
        printf("Greater than 9");
    }
    
    return 0;
}