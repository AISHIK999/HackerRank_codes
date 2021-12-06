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
    len = (2 * n) - 1;
    int arr[len][len];

    for (int i = 0; i < n; i++)
        for (int width = i; width < len - i; width++)
            for (int height = i; height < len - i; height++)
                arr[width][height] = n - i;

    for (int width = 0; width < len; width++)
    {
        for (int height = 0; height < len; height++)
            printf("%d ", arr[width][height]);
        printf("\n");
    }
    return 0;
}