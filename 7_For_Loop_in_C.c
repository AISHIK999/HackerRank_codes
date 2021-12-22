/*
For each integer n in the interval [a,b] (given as input) :

If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    //Enter the while loop when the value of 'a' is greater than or equal to 'b' are met
    while (a <= b)
    {
        //Enter the if statement when the value of 'a' is greater than or equal to 1 and lesser than or equl to 9
        if (a >= 1 && a <= 9)
        {
            //Print the statement inside the if condition when the conditions are met
            if (a == 1)
            {
                printf("one\n");
            }
            else if (a == 2)
            {
                printf("two\n");
            }
            else if (a == 3)
            {
                printf("three\n");
            }
            else if (a == 4)
            {
                printf("four\n");
            }
            else if (a == 5)
            {
                printf("five\n");
            }
            else if (a == 6)
            {
                printf("six\n");
            }
            else if (a == 7)
            {
                printf("seven\n");
            }
            else if (a == 8)
            {
                printf("eight\n");
            }
            else if (a == 9)
            {
                printf("nine\n");
            }
        }
        //Enter the 'else if' condition when the initial 'if' statemnt condition are not met
        else if (a > 9)
        {
            if (a % 2 == 0)
            {
                printf("even\n");
            }
            else if (a % 2 != 0)
            {
                printf("odd\n");
            }
        }
        a++;
    }

    return 0;
}
