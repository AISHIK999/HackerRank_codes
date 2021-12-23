#!/bin/bash

# Given three integers (X, Y, and Z) representing the three sides of a triangle, identify whether the triangle is scalene, isosceles, or equilateral.

# If all three sides are equal, output EQUILATERAL.
# Otherwise, if any two sides are equal, output ISOSCELES.
# Otherwise, output SCALENE.

read X
read Y
read Z

# Print EQUILATERAL when all three values are the same
if ((($X == $Y) && ($Y == $Z)))
	then
	echo "EQUILATERAL"

# Print ISOSCELES when anY of the two values are the same
elif ((($X == $Y) || ($X == $Z) || ($Y == $Z)))
	then
	echo "ISOSCELES"

# Otherwise, print SCALENE when all three values are different
else
	echo "SCALENE"
fi 