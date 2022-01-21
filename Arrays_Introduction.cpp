#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Create an array of size create by the user
    int size;
    scanf("%d", &size);
    int arr[size];

    // Scan the numbers and store them in array
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Print out the numbers stored reversely in the array
    for (int i = (size - 1); i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
