/*
    Reverse the contents of an array

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    int n;
    scanf("%d", &n);
    int temp;
    int *arr;
    arr = (int *)malloc(n * sizeof(int));   //Allocate memory with respect to size of integer tyoe size

    //Print the contents inside the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Print the contents inside the array inreverse order
    for (int i = n-1 ; i>=0 ; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}