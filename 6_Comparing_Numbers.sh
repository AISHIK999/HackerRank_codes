#!/bin/bash

#
# Given two integers, X and Y, identify whether X>Y or X<Y or X=Y.
# Exactly one of the following lines:
# - X is less than Y
# - X is greater than Y
# - X is equal to Y
#

read X #Take input and store it under variable X
read Y #Take input and store it under variable Y

if (( $X > $Y ))    # Enter the if condition if the required condition: $X > $Y are met
then    # Perform the below operation(s) when the if condition is met
    echo "X is greater than Y"
fi

if (( $X < $Y ))    # Enter the if condition if the required condition: $X < $Y are met
then    # Perform the below operation(s) when the if condition is met
    echo "X is less than Y"
fi

if (( $X == $Y ))   # Enter the if condition if the required condition: $X == $Y are met
then    # Perform the below operation(s) when the if condition is met
    echo "X is equal to Y"
fi
