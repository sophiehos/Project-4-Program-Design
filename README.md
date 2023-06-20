# Project-4-Program-Design
Project 4, Program Design
1. (50 points) Write a program that reads the values for the radius and height of a solid
cylinder using two variables of type double, and then calculates the surface area and
volume of the cylinder.
The program should include the following function. Do not modify the function
prototype.
void area_volume(double radius, double height, double
*pointer_area, double *pointer_volume);
The function takes two parameters of double type for the radius and height of the
cylinder. The pointer_area parameter points to a variable in which the function
will store the area of the circle. The pointer_volume parameter points to a
variable in which the function will store the volume of the cylinder.
1) Name your program cylinder.c
2) The main function should ask the user to enter the radius of the cylinder and call
the area_volume function to calculate the area and volume.
3) The area_volume function does NOT print the area, volume, or anything else.
The area and volume of the cylinder passed back from the two pointer arguments
pointer_area and pointer_volume are printed out in the main
function.
4) The main function should contain the printf statements that display the area
and volume with three decimal digits.
Example input/output:
Enter the radius of the cylinder: 3.4
Enter the height of the cylinder: 8.2
Output: The volume of the cylinder is 297.798 and the area
is 247.809
2. (50 points) Suppose you are given an array of integers. You want to insert a number x to
the array and rearrange so that all the elements are less than or equal to x are before x,
and the elements after x are greater than x. For example, suppose the list is {3, 2, 7, 0 1,
5} and x is 4, since 3, 2, 0, and 1, are less than or equal to 4, 7 and 5 are greater than 4,
the new array is {3, 2, 0, 1, 4, 7, 5}. The new array has the length of n+1 where n is the
length of the input array.
Example input/output #1:
Enter the length of the array: 10
Enter the elements of the array: 3 5 1 4 0 3 9 2 8 11
Enter the number for insertion: 3
Output:
3 1 0 3 2 3 5 4 9 8 11
Example input/output #2:
Enter the length of the array: 8
Enter the elements of the array: 5 0 13 4 1 7 3 5
Enter the number for insertion: 6
Output:
5 0 4 1 3 5 6 13 7
1) Name your program arrays.c
2) Include the rearrange() function to rearrange the array:
void rearrange(int *a, int n, int insert, int *b);
a represents the input array with length n, and b represents the output array.
insert represents the number for insertion. This function should use pointer
arithmetic– not subscripting – to visit array elements. In other words,
eliminate the loop index variables and all use of the [] operator in the
function.
3) In the main function, ask the user to enter the length of the input array, declare
the input array. Then ask the user to enter the elements of the array, and the
number for insertion. Then call the rearrange function to rearrange and store
the elements in array b, then display the output array.
4) Pointer arithmetic in NOT required in the main function.
Before you submit
1. Compile both programs with –Wall. –Wall shows the warnings by the compiler. Be sure
it compiles on student cluster with no errors and no warnings.
gcc –Wall cylinder.c
gcc –Wall arrays.c
2. Be sure your Unix source file is read & write protected. Change Unix file permission on
Unix:
chmod 600 cylinder.c
chmod 600 arrays.c
3. Test your programs with the shell scripts on Unix:
chmod +x try_cylinder
./try_cylinder
chmod +x try_rearrange
./try_rearrange
4. Submit cylinder.c and arrays.c on Canvas.
Grading
Total points: 100 (50 points each problem)
1. A program that does not compile will result in a zero.
2. Runtime error and compilation warning 5%
3. Commenting and style 15%
4. Functionality 80% (Including functions implemented as required)
Programming Style Guidelines
The major purpose of programming style guidelines is to make programs easy to read and
understand. Good programming style helps make it possible for a person knowledgeable in the
application area to quickly read a program and understand how it works.
1. Your program should begin with a comment that briefly summarizes what it does. This
comment should also include your name.
2. In most cases, a function should have a brief comment above its definition describing
what it does. Other than that, comments should be written only needed in order for a
reader to understand what is happening.
3. Information to include in the comment for a function: name of the function, purpose of
the function, meaning of each parameter, description of return value (if any), description
of side effects (if any, such as modifying external variables)
4. Variable names and function names should be sufficiently descriptive that a
knowledgeable reader can easily understand what the variable means and what the
function does. If this is not possible, comments should be added to make the meaning
clear.
5. Use consistent indentation to emphasize block structure.
6. Full line comments inside function bodies should conform to the indentation of the code
where they appear.
7. Macro definitions (#define) should be used for defining symbolic names for numeric
constants. For example: #define PI 3.141592
8. Use names of moderate length for variables. Most names should be between 2 and 12
letters long.
9. Use underscores to make compound names easier to read: tot_vol or
total_volumn is clearer than totalvolumn.
