/*
You have to print the character, ch, in the first line. Then print s in next line. In the last line print the sentence, sen.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[45];
    char sen[45];
    
    scanf("%c", &ch);
    scanf("%s", &s);
    gets(sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    puts(sen);
    
    return 0;
}