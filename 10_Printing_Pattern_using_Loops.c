/*
Print a pattern of numbers from 1 to n as shown below

4 4 4 4 4 4 4  
4 3 3 3 3 3 4   
4 3 2 2 2 3 4   
4 3 2 1 2 3 4   
4 3 2 2 2 3 4   
4 3 3 3 3 3 4   
4 4 4 4 4 4 4   

Numbers should be separated by space
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, len;
    scanf("%d", &n);
    len = (2 * n) - 1; //This value stored in the variable 'len' makes up the pattern
    int arr[len][len]; //Create a 2D array of width and height of length 'len' as supplied by the user

    for (int i = 0; i < n; i++)                              //For loop for starting pattern creatinon
        for (int width = i; width < len - i; width++)        //Set the width of the pattern through the for loop
            for (int height = i; height < len - i; height++) //Set the height of the pattern through the for loop
                arr[width][height] = n - i;

    for (int width = 0; width < len; width++) //Run the for loop until the 'width' reaches the value of 'len'
    {
        for (int height = 0; height < len; height++)
            printf("%d ", arr[width][height]); //Create the 2D array 'arr', i.e., the pattern of width and height calculated
        printf("\n");
    }
    return 0;
}