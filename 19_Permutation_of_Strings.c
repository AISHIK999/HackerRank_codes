/*

Given an array of strings sorted in lexicographical order, print all of its permutations in strict lexicographical order. If two permutations look the same, only print one of them. See the 'note' below for an example.
Complete the function next_permutation which generates the permutations in the described order.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int next_permutation(int n, char **s)
//The function takes input n (the length of the string array) and **s (A pointer that points to another pointer, which in turn points to the string array) as described in the main function
//This function can be divided into 4 simple steps
//STEP 1: Find the largest index in the array, whose value is lesser than the value contained in the next index
//STEP 2: Find the largest index in the array, that is greater both in terms of value and index number
//STEP 3: This is a simple swap function
//STEP 4: Here we begin arranging the elements in reverse order
{
    //Begin step 1
    int a, b;
    for (a = n - 2; a >= 0; a--)
    {
        if (strcmp(s[a], s[a + 1]) < 0) //Arrange in lexicographical order
        {
            break;
        }
    }
    if (a < 0)
    {
        return 0;
    }

    //Begin step 2
    for (b = n - 1; b > a; b--)
    {
        if (strcmp(s[a], s[b]) < 0)
        {
            break;
        }
    }

    //Begin step 3
    char *tmp = s[a];
    s[a] = s[b];
    s[b] = tmp;

    //Begin step 4
    for (int i = a + 1, j = n - 1; i < j; i++, j--)
    {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
    return 1;
}

int main()
{
    char **s;
    int n;
    scanf("%d", &n);
    s = calloc(n, sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        s[i] = calloc(11, sizeof(char));
        scanf("%s", s[i]);
    }
    do
    {
        for (int i = 0; i < n; i++)
            printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
    } while (next_permutation(n, s));
    for (int i = 0; i < n; i++)
        free(s[i]);
    free(s);
    return 0;
}