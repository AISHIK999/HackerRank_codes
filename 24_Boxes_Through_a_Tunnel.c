/*
You are transporting some boxes through a tunnel, where each box is a parallelepiped, and is characterized by its length, width and height.

The height of the tunnel 41 feet and the width can be assumed to be infinite. A box can be carried through the tunnel only if its height is strictly less than the tunnel's height. Find the volume of each box that can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_HEIGHT 41 // Set max height as specified in the question

struct box
{
    // The structure of the box contains it's length, height and width
    int length;
    int height;
    int width;
};

typedef struct box box;

int get_volume(box b)
{
    return (b.length * b.height * b.width); // Return the volume of the box when the function is called
}

// When the below function is called, return the volume of only the boxes that can pass through the tunnel
// i.e., height is lesser than the specified MAX_HEIGHT
int is_lower_than_max_height(box b)
{
    if (b.height < MAX_HEIGHT)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    box *boxes = malloc(n * sizeof(box));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }
    for (int i = 0; i < n; i++)
    {
        if (is_lower_than_max_height(boxes[i]))
        {
            printf("%d\n", get_volume(boxes[i]));
        }
    }
    return 0;
}