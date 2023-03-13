#!/b in/bash

# Collect all the .c files in the current directory
c_files=$(ls *.c)

# Compile all the .c files into object files
for file in $c_files
do
	gcc -c $file
done

    # Create a static library from the object files
    ar rcs liball.a *.o

    # Clean up the object files
    rm *.o
