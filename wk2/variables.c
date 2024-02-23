// part1_variables
//
// This program was written by Billy, z5417266
// on 23-02-24
//
// This program shows how to declare and initalise variables.
// It also shows how to define and use constants.

#include <stdio.h>

int main(void) {
  // 1. Declare the variables
	int age;  // declares an integer i.e. a whole number
  char initial; // declares a character
  
  // 2. Initalise the variables
  age = 20; // initialise age variable 
  initial = 'B'; // initialise initial variable

  // declaring and initalising in the same line
  double height = 64.1; // declare AND initialise height variable
    
  // 3. Print the variables - multiple per statement
  printf("I am %d years old, my name starts with %c and i am %lf tall\n", age, initial, height);
    
  // 4. Reassign the values of some of the variables
  age = 21;    

	return 0;
}
