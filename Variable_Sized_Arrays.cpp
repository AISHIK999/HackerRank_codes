#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int row, query;
    cin >> row >> query;
    int **arr = new int *[row]; // Create the row of the array
    for (int i = 0; i < row; i++)
    {
        int column;
        cin >> column;
        int *TempArr = new int[column]; // Create the column of the array
        for (int j = 0; j < column; j++)
        {
            // Store the value inside the array
            int val;
            cin >> val;
            TempArr[j] = val;
        }
        *(arr + i) = TempArr;
    }
    // Print out the the values in the rows and columns as number of times as of the query
    for (int i = 0; i < query; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }

    return 0;
}