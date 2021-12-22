/*

Given an array of strings, you need to implement a string_sort function which sorts the strings according to a comparison function, i.e, you need to implement the function :

void string_sort(char **arr,int cnt, int (*cmp_func)(char* a, char* b)){
    
}

The arguments passed to this function are:

an array of strings : arr
length of string array: count
pointer to the string comparison function: cmp_func
You also need to implement the following four string comparison functions:

int lexicographic_sort(char *a, char *b) to sort the strings in lexicographically non-decreasing order.

lexicographic_sort_reverse(char *a, char *b) to sort the strings in lexicographically non-increasing order.

int sort_by_number_of_distinct_characters( char *a, char *b) to sort the strings in non-decreasing order of the number of distinct characters present in them. If two strings have the same number of distinct characters present in them, then the lexicographically smaller string should appear first.

int sort_by_length(char *a, char *b) to sort the strings in non-decreasing order of their lengths. If two strings have the same length, then the lexicographically smaller string should appear first.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcmp is a prebuilt function that compares two strings lexicographically. So we do not need to work into this
int lexicographic_sort(char *a, char *b)
{
    return strcmp(a, b);
}

int lexicographic_sort_reverse(char *a, char *b)
{
    return strcmp(b, a);
}

// Founction to count the frequency of the characters
int character_num(char *s)
{
    int n = 0;
    int count[256] = {0}; //I set array length to 256
    if (NULL == s)
    {
        return -1;
    }
    while (*s != '\0')
    {
        if (!count[*s])
        {
            count[*s]++;
            n++; //Increment the count
        }
        s++;
    }
    return n;
}

//Function to sort the strings in non-decreasing order of the number of distinct characters present in them
int sort_by_number_of_distinct_characters(char *a, char *b)
{
    int res = character_num(a) - character_num(b); //character_num functions has been described previously
    if (res)
    {
        return res;
    }
    else
    {
        return lexicographic_sort(a, b);
    }
}

//Function to sort the strings in non-decreasing order of their lengths
int sort_by_length(char *a, char *b)
{
    int len = strlen(a) - strlen(b);
    if (len)
    {
        return len;
    }
    else
    {
        return lexicographic_sort(a, b);
    }
}

//Bubble sort
void string_sort(char **arr, int len, int (*cmp_func)(char *a, char *b))
{
    int mid = len / 2;
    int con = 0;
    while (!con)
    {
        con = 1;
        for (int i = 0; i < len - 1; i++)
        {
            if (cmp_func(arr[i], arr[i + 1]) > 0)
            {
                char *temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                con = 0;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    char **arr;
    arr = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}