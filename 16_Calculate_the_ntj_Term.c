/*

There is a series, S, where the next term is the sum of pervious three terms. Given the first three terms of the series, a, b, and c respectively, you have to output the nth term of the series using recursion

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* Create a function that takes four integer input
   The first integer is the limit of the recursion series
   The other three are the first three integers*/
int find_nth_term(int n, int a, int b, int c)
{
    if (n == 1)
    {
        return a; //Return te first number because there are not more than three numbers to add
    }
    else if (n == 2)
    {
        return b; //Return te second number because there are not more than three numbers to add
    }
    else if (n == 3)
    {
        return c; //Return te third number because there are not more than three numbers to add
    }
    else
    {
        // The sum variable contains the return value of the recursive function that contains the sum of the last three numbers of the series
        return find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 2, a, b, c);
    }
}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}