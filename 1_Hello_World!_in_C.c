/*
This challenge requires you to print "Hello, World !" on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char str[] = "Hello, World!";   //Stores the string "Hello, World!" in the 'str[]' array
    printf("%s\n", str);    //Print the contents of the array 'str'
    char s[100];    //Create an array of size 100
    gets(s);    //Take input from the user and store that in the array 's'
    puts(s);    // Print out the contents of the array 's'
    return 0;
}