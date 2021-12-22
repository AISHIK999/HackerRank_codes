/*
In this challenge, create an array of size  dynamically, and read the values from stdin. Iterate the array calculating the sum of all elements. Print the sum and free the memory where the array is stored.

While it is true that you can sum the elements as they are read, without first storing them to an array, but you will not get the experience working with an array. Efficiency will be required later.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int *arr, n, sum = 0;   //Create a pointer and two integer type variables
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));   //Allocate memory for size of int type

    for (int i = 0; i < n; i++) //Use the for loop to store the values inside the array 'arr'
    {
        scanf("%d", &arr[i]);
        sum += arr[i];  //Increment the value stored inside the variable 'sum' with the each element stored in the array
    }
    printf("%d", sum);
    return 0;
}