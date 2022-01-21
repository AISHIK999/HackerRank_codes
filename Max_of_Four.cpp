/*
Input Format

Input will contain four integers - a, b, c, d one per line.

Output Format

Return the greatest of the four integers.
PS: I/O will be automatically handled.
*/
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int temp1, temp2;
    // The greater value between a and b is stored in temp1 variable
    if (a > b || a == b)
    {
        temp1 = a;
    }
    else
    {
        temp1 = b;
    }
    // The greater value between a and b is stored in temp1 variable
    if (c > d || c == d)
    {
        temp2 = c;
    }
    else
    {
        temp2 = d;
    }
    // The greater value between temp1 and temp2 is returned
    if (temp1 > temp2 || temp1 == temp2)
    {
        return temp1;
    }
    else
    {
        return temp2;
    }
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}