/*
Implement three variadic functions named sum(), min() and max() to calculate sums, minima, maxima of a variable number of arguments. The first argument passed to the variadic function is the count of the number of arguments, which is followed by the arguments themselves.
Unfortunately, I was not swift with the concept of variadic functions at the moment ;-;
After struggling for a long time, I took some help from:
https://www.tutorialspoint.com/cprogramming/c_variable_arguments.htm

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000

/*
Variadic functions are the functions that takes the input of atleast one declared variable and ellipsis (...) as the last parameter
We are creating three variadic functions below:
*/
int sum(int count, ...) //The variadic function sum() takes a declared input (int count), which marks the number inputs we take afterwards. The function basically calculates the sum of the user inputs
{
    int sumVal = 0, i, sum;
    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++)
    {
        sum = va_arg(args, int);
        sumVal += sum; //Continue adding the values until the end of the 'count, variable is reached
    }
    va_end(args);
    return sumVal;
}

int min(int count, ...) //This function is to calculate the minimum value
{
    int minVal = 100000; //Set the minimum value to 100000
    int i, min;
    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++)
    {
        min = va_arg(args, int);
        if (min < minVal)
        {
            minVal = min; //Set the new minimum value from the input as default, if it is lower than the previously declared 100000
        }
    }
    va_end(args);
    return minVal;
}

int max(int count, ...)
{
    int maxVal = -1, i, max;
    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) //We continue to traverse through the inputs by using the for loop
    {
        max = va_arg(args, int);
        if (max > maxVal)
        {
            maxVal = max;   //Set the maximum variable once the value exceeds the previous greater value
        }
    }
    va_end(args);
    return maxVal;
}

int test_implementations_by_sending_three_elements()
{
    srand(time(NULL));

    int elements[3];

    elements[0] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[1] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[2] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;

    fprintf(stderr, "Sending following three elements:\n");
    for (int i = 0; i < 3; i++)
    {
        fprintf(stderr, "%d\n", elements[i]);
    }

    int elements_sum = sum(3, elements[0], elements[1], elements[2]);
    int minimum_element = min(3, elements[0], elements[1], elements[2]);
    int maximum_element = max(3, elements[0], elements[1], elements[2]);

    fprintf(stderr, "Your output is:\n");
    fprintf(stderr, "Elements sum is %d\n", elements_sum);
    fprintf(stderr, "Minimum element is %d\n", minimum_element);
    fprintf(stderr, "Maximum element is %d\n\n", maximum_element);

    int expected_elements_sum = 0;
    for (int i = 0; i < 3; i++)
    {
        if (elements[i] < minimum_element)
        {
            return 0;
        }

        if (elements[i] > maximum_element)
        {
            return 0;
        }

        expected_elements_sum += elements[i];
    }

    return elements_sum == expected_elements_sum;
}

int test_implementations_by_sending_five_elements()
{
    srand(time(NULL));

    int elements[5];

    elements[0] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[1] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[2] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[3] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[4] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;

    fprintf(stderr, "Sending following five elements:\n");
    for (int i = 0; i < 5; i++)
    {
        fprintf(stderr, "%d\n", elements[i]);
    }

    int elements_sum = sum(5, elements[0], elements[1], elements[2], elements[3], elements[4]);
    int minimum_element = min(5, elements[0], elements[1], elements[2], elements[3], elements[4]);
    int maximum_element = max(5, elements[0], elements[1], elements[2], elements[3], elements[4]);

    fprintf(stderr, "Your output is:\n");
    fprintf(stderr, "Elements sum is %d\n", elements_sum);
    fprintf(stderr, "Minimum element is %d\n", minimum_element);
    fprintf(stderr, "Maximum element is %d\n\n", maximum_element);

    int expected_elements_sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (elements[i] < minimum_element)
        {
            return 0;
        }

        if (elements[i] > maximum_element)
        {
            return 0;
        }

        expected_elements_sum += elements[i];
    }

    return elements_sum == expected_elements_sum;
}

int test_implementations_by_sending_ten_elements()
{
    srand(time(NULL));

    int elements[10];

    elements[0] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[1] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[2] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[3] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[4] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[5] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[6] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[7] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[8] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;
    elements[9] = rand() % (MAX_ELEMENT - MIN_ELEMENT + 1) + MIN_ELEMENT;

    fprintf(stderr, "Sending following ten elements:\n");
    for (int i = 0; i < 10; i++)
    {
        fprintf(stderr, "%d\n", elements[i]);
    }

    int elements_sum = sum(10, elements[0], elements[1], elements[2], elements[3], elements[4],
                           elements[5], elements[6], elements[7], elements[8], elements[9]);
    int minimum_element = min(10, elements[0], elements[1], elements[2], elements[3], elements[4],
                              elements[5], elements[6], elements[7], elements[8], elements[9]);
    int maximum_element = max(10, elements[0], elements[1], elements[2], elements[3], elements[4],
                              elements[5], elements[6], elements[7], elements[8], elements[9]);

    fprintf(stderr, "Your output is:\n");
    fprintf(stderr, "Elements sum is %d\n", elements_sum);
    fprintf(stderr, "Minimum element is %d\n", minimum_element);
    fprintf(stderr, "Maximum element is %d\n\n", maximum_element);

    int expected_elements_sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (elements[i] < minimum_element)
        {
            return 0;
        }

        if (elements[i] > maximum_element)
        {
            return 0;
        }

        expected_elements_sum += elements[i];
    }

    return elements_sum == expected_elements_sum;
}

int main()
{
    int number_of_test_cases;
    scanf("%d", &number_of_test_cases);

    while (number_of_test_cases--)
    {
        if (test_implementations_by_sending_three_elements())
        {
            printf("Correct Answer\n");
        }
        else
        {
            printf("Wrong Answer\n");
        }

        if (test_implementations_by_sending_five_elements())
        {
            printf("Correct Answer\n");
        }
        else
        {
            printf("Wrong Answer\n");
        }

        if (test_implementations_by_sending_ten_elements())
        {
            printf("Correct Answer\n");
        }
        else
        {
            printf("Wrong Answer\n");
        }
    }

    return 0;
}