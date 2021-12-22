/*
    Given a sentence, s, print each word of the sentence in a new line.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));    //Allocate memory for the pointer to store 1024 times the size of character variable 
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);  //Reallocate memory

    for (int i = 0; i < strlen(s); i++) //Visit each element inside 's' until the string length is reached
    {
        // The end of a word, indicated by a blank space ' , when reached, create a new line. Otherwise, continue printing contents
        if (s[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }
    }

    return 0;
}