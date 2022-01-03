/*
You are given n triangles, specifically, their sides a, b and c. Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different.

The best way to calculate a area of a triangle with sides a, b and c is Heron's formula:
√s(s - a)(s - b)(s - c) where s is half the perimeter, or (a + b + c)/2

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct triangle //Define struct triangle with three values that indicate the three sides of the triangle
{
    int a;
    int b;
    int c;
};
typedef struct triangle triangle;

float area(triangle tr) //This function calculates the area of a triangle using Heron's formula
{
    float p;
    p = (tr.a + tr.b + tr.c) / 2.0;
    return sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c)); //Heron's formula
}

int partition(const void *v1, const void *v2) //Sets the index to be picked up by the quicksort function
{
    const triangle *tr1 = v1;
    const triangle *tr2 = v2;
    float tr1_area = area(*tr1);
    float tr2_area = area(*tr2);
    if (tr1_area > tr2_area)
        return 1;
    if (tr1_area < tr2_area)
        return -1;
    return 0;
}

void sort_by_area(triangle *tr, int n) //Function that sorts the triangles based on their areas in ascending order using quicksort function
{
    qsort(tr, n, sizeof(triangle), partition);
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }

    return 0;
}