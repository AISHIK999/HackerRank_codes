#!/bin/bash

# Given N integers, compute their average, rounded to three decimal places.

read N   #This reads the number of integers to be included. We will use this variable to run a loop that calculates the sum of all the input integers
num=$N   #This stores the number of integers to be added, which is the same as the value CURRENTLY stored in 'N' variable
sum=0   # This is a variable which currently stores NULL value, but the new values will be added intp it as we run the while loop

while [ $N -gt 0 ]   # We weill run the loop until all the numbers are added, i.e., the counter: 'N' variable reaches 0
do
   read val # Take the values as input
   sum=$((sum + val))   # Continue to add the input values into the 'sum' variable while passing the loop each N
   N=$((N - 1))   # Reduce the counter variable: 'N' after each number is added into the 'sum' variable
done
avg=$sum/$num   # Find the average of all the numbers. 'sum' contains the total sum of 'num' number of integers
printf "%.3f\n" `echo "$avg" | bc -l`   # Print out the value stored in 'avg' variable using bash calculator and rounding up the values to 3 decimal places 
