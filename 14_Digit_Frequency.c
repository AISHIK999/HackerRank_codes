/*
Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // Create arrays to store characters
    char s[1000];
    char num[10];

    scanf("%s", &s);    //User creates the array consisting of alphabets and digits
    // Set all the frequency of the numbers to zero
    for (int i = 0; i < 10; i++)
    {
        num[i] = 0;
    }

    //Increase the frquency for each number from 0 to 9 inside the array each time a digit is repeated 
    for (int i = 0; i < strlen(s); i++)
    {
        int j = s[i] - '0';
        if (j >= 0 && j <= 9)
            num[j]++;
    }

    //Print the frequency of repetition of each digit from 0 to 9
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}