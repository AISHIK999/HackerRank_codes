/*
Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[1000];
    char num[10];
    scanf("%s", &s);

    for (int i = 0; i < 10; i++)
        num[i] = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        int j = s[i] - '0';
        if (j >= 0 && j <= 9)
            num[j]++;
    }

    for (int i = 0; i < 10; i++)
        printf("%d ", num[i]);

    return 0;
}