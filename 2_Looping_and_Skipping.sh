#! /bin/bash

#
# Your task is to use for loops to display only odd natural numbers from 1 to 99.
#

a=1                     #The initial value

while [ $a -lt 100 ]    #Continue the do-while loop until the variable 'a' reaches 100
do  #Do the following operations until the while condition is met 
    echo $a #Print the variable 'a'
    a=`expr $a + 2` #Increment the variable 'a' by 2
done
