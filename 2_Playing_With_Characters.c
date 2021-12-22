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
    char s[45]; //Create array 's' of size 45
    char sen[45];   //Create array 'sen' of size 45
    
    scanf("%c", &ch);   //Take user input and store it in the character variable 'ch'
    scanf("%s", &s);    //Take user input and store it in the string variable 'ch'
    gets(sen);  //Take user input and store it as string in the array 'sen'

    printf("%c\n", ch); 
    printf("%s\n", s);
    puts(sen);  //Print contents of the array 'sen'
    
    return 0;
}