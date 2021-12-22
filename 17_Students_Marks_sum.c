/*

You are given an array of integers, marks, denoting the marks scored by students in a class.

The alternating elements marks0, marks2, marks4 and so on denote the marks of boys.
Similarly, marks1, marks3, marks5 and so on denote the marks of girls.
The array name, marks, works as a pointer which stores the base address of that array. In other words, marks contains the address where marks0 is stored in the memory.

Function Description

Complete the function, marks_summation in the editor below.

marks_summation has the following parameters:

int marks[number_of_students]: the marks for each student
int number_of_students: the size of marks[]
char gender: either 'g' or 'b'
Returns

int: the sum of marks for boys if gender = b, or of marks of girls if gender = g

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
    Create a function that takes three integer type inputs
    The first input is a pointer that points to the marks stored in the array marks
    The second input is a variable that stores the length of the array
    The third input is the gender, which determines the series to add. The series is even for boys(b), and odd for girls(g)
*/
int marks_summation(int *marks, int number_of_students, char gender)
{
    int sum = 0;
    //If the gender is boy, add all the variables stored in the even positions of the array 'marks'
    if (gender == 'b')
    {
        for (int i = 0; i < number_of_students; i = (i+2))
        {
            sum += marks[i];
        }
    }
    //If the gender is girl, add all the variables stored in the odd positions of the array 'marks'
    else if (gender == 'g')
    {
        for (int i = 1; i < number_of_students; i = (i+2))
        {
            sum += marks[i];
        }
    }
    else
    {
        return 1;
    }
    return sum;
}

int main()
{
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *)malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}