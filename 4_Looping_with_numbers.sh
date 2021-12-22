#! /bin/bash

#
# Use a for loop to display the natural numbers from 1 to 50.
#

for i in {1..50..0}    #Continue the for loop starting from 1 till 50 while skipping 0 positions between each. We can also redact the '..0' part if we want to print all the numbers from 1 to 50. I have included here for learning purposes
do  #Do the operations until the for loop conditions are met
    echo $i     # Print the variable used in the for loop
done