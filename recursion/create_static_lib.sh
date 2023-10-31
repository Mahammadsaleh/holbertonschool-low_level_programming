#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create the static library liball.a and add all the .o files to it
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up the .o files (optional)
rm *.o
