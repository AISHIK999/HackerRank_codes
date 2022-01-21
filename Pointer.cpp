#include <stdio.h>
#include <cstdlib> //Library to use the absolute function abs()

void update(int *a, int *b)
{
    int sum, difference;
    sum = (*a + *b);
    difference = abs((*a) - (*b));
    // The values of the pointers are changed with their sums and differences
    *a = sum;
    *b = difference;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}