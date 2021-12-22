#!/bin/bash

#
# Given two integers, X and Y, find their sum, difference, product, and quotient.
#

read X  #Take input and store it under variable X
read Y  #Take inut and store it under variable Y

echo $((X+Y))   # Print sum of X and Y
echo $((X-Y))   # Print subtraction of X and Y
echo $((X*Y))   # Print multiplication of X and Y
echo $((X/Y))   # Print division of X and Y
