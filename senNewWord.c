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
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    for (int i = 0; i < strlen(s); i++)
    {
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