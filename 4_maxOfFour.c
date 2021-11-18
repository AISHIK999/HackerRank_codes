/*
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
*/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int e, f;
    if (a>=b)
    {
        e = a;
    }
    else
    {
        e = b;
    }

    if (c>=d)
    {
        f = c;
    }
    else
    {
        f =d;
    }    

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
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}