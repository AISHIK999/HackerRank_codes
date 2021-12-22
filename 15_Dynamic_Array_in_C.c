/*

Snow Howler who is the librarian at the central library of the city of HuskyLand. He must handle requests which come in the following forms:

1 x y: Insert a book with Y pages at the end of the Xth shelf.
2 x y: Print the number of pages in the Yth book on the Xth shelf.
3 x: Print the number of books on the Xth shelf.
Snow Howler has got an assistant, Oshie, provided by the Department of Education. Although inexperienced, Oshie can handle all of the queries of types 2 and 3. Help Snow Howler deal with all the queries of type 1.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int *TotalBooks;  // Stores total number of books in each shelf
int **TotalPages; // Stores the shelves along the row and the books along the column

int main()
{
    int TotalShelves;           // Create variable to store the total number of shelves
    scanf("%d", &TotalShelves); // Store the total number of slhelves in the TotalShelves variable
    int TotalQueries;           // Create variable to store the total number of queries
    scanf("%d", &TotalQueries); // Store the total number of slhelves in the TotalQueries variable

    // Dynamically allocate memory
    TotalBooks = (int *)malloc(sizeof(int) * TotalShelves);
    TotalPages = (int **)malloc(sizeof(int *) * TotalShelves);

    // Continue the for loop and dynamicaly allocate memory until all the shelves are covered
    for (int i = 0; i < TotalShelves; i++)
    {
        TotalBooks[i] = 0;
        TotalPages[i] = (int *)malloc(sizeof(int));
    }

    for (int k = TotalQueries; k >= 0; k--) //Continue the for loop until there are no remaining queries, i.e. TotalQueries == 0
    {
        int QueryType;
        scanf("%d", &QueryType); // Take input for the type of query as specified in th question

        if (QueryType == 1)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            // Insert a book with 'y' pages at the end of 'x'th shelf
            *(TotalBooks + x) += 1;
            *(TotalPages + x) = realloc(*(TotalPages + x), *(TotalBooks + x) * sizeof(int));
            *(*(TotalPages + x) + *(TotalBooks + x) - 1) = y;
        }
        else if (QueryType == 2)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            //Print the number of pages of 'y'th book on the 'x'th shelf
            printf("%d\n", *(*(TotalPages + x) + y));
        }
        else if (QueryType == 3)
        {
            int x;
            scanf("%d", &x);
            // Print the number of books on the 'x'th shelf
            printf("%d\n", *(TotalBooks + x));
        }
        else
        {
            // Default return value if none of the query choices are met
            printf("Incorrect choice!");
            return 1;
        }
    }

    return 0;
}