/*
You will be given an integer n and a threshold k. 
For each number 1 through n, find the maximum value of logical AND, OR and XOR operator
Print the results of the and, or and exclusive or comparisons on separate lines, in that order.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Create a function of vid data type that takes two integer inputs
void calculate_the_maximum(int n, int k) {
    int and=0,or=0,xor=0;
    for(int i = 1;i<=n;i++) //Run the for loop until 'i' reaches the value of 'n'
    {
        // Run another for loop
        for(int j = i+1;j<=n;j++)
        {
            //Enter the statements when the conditions are met and stores the value of the operators
            if((i&j) > and &&(i&j) < k){
            and = i&j;
        }
            if( (i|j) > or && (i|j) < k) 
            {
            or = i|j;
            }
            if( (i^j) > xor && (i^j) < k)
            {
            xor = i^j;
            }
        }
    }
  printf("%d\n%d\n%d",and,or,xor);
}
 

int main(){
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}