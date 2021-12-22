#!/bin/bash

# Read in one character from STDIN.
# If the character is 'Y' or 'y' display "YES".
# If the character is 'N' or 'n' display "NO".
# No other character will be provided as input.

read choice

if [[ ($choice == 'y') || ($choice == 'Y') ]]
then
    echo "YES"
elif [[ ($choice == 'n') || ($choice == 'N') ]]
then
    echo "NO"
fi
