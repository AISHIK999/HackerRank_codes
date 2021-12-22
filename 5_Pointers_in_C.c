/*
Complete the function void update(int *a,int *b). 
It receives two integer pointers, int* a and int* b. 
Set the value of a to their sum, and b to their absolute difference. 
There is no return value, and no return statement is needed.
*/

#include <stdio.h>

//Create a function that does not return any value i.e., 'void' function
void update(int *a,int *b) {    //The function takes inputs of two pointers
      int sum = *a + *b;    // Sum of inputs
      int dif = abs(*a - *b);   //Absolute difference of the input, to remove the negative sign (if any)
      *a = sum; // This pointer now indicates the value of the sum 
      *b = dif; // Thsi pointer now indicates the value of the difference
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b; //Pointer 'pa' stores the address of 'a'. Pointer 'pb' stores the address of 'b'
    
    scanf("%d %d", &a, &b); //Takes user input for the values of 'a' and 'b'
    update(pa, pb); //Use the update function
    printf("%d\n%d", a, b); //Print the values after passing the update function

    return 0;
}