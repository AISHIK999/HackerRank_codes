#!/bin/bash

# A mathematical expression containing +,-,*,^, / and parenthesis will be provided. Read in the expression, then evaluate it. Display the result rounded to 3 decimal places.

read val    #Read the input and store it under 'val' variable

# bc -l: Turns on bash calculator (bc) and caculates the value stored in the mentioned variable 'val'. It then calcultes the expression stored in the variable 'va' and simplifies it, if possible and stores the calculated value back into the variable 'val'
# "%.3f\n" : Round up the value stored in 'val' to three decimal places
# echo "$val": Prints out the value stored under 'val'

printf "%.3f\n" `echo "$val" | bc -l`