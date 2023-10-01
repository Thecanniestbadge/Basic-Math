// Programmer:		TheCanniestBadge
// Date:			5/24/2023
// Program Name:	Basic Math
// Chapter:			Basic Math
// Description:		Create an integer constant for the value of 100, and use the constant in both the calculations and the output. 
//					Type casting will be required when doing the division. Have a blank line between the input and the output. Follow the 3 steps in the Information Processing Cycle - Input, Processing, and Output.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <math.h> // Needed for working with math functions 
#include <stdlib.h> // need for the random number generator
#include <time.h> // need for the time() function 
int main(void)
{
	// Constant and Variable Declarations
	int num1				= 0;
	int num2				= 0;
	const int ONE_HUNDRED = 100;
	double quotientOfNum1 = 0.0;
	int remainderOfNum2		= 0;
	int powerOf2			= 0;
	int myRandom			= 0;

	// *** Your program goes here ***
	// *** INPUT ***
	// Get 2 integers
	printf("Enter an integer between 1 and 10: ");
	scanf("%d", &num1);
	printf("Enter another integer between 1 and 10: ");
	scanf("%d", &num2);
	printf("\n"); // Blank Line

	// *** PROCESSING ***
	// Calculate the quotient
	quotientOfNum1 = ONE_HUNDRED / (double)num1;
	// Calculate the remainder
	remainderOfNum2 = ONE_HUNDRED % num2;
	// Calculate 2 to the power of num1
	powerOf2 = pow(2, num1);
	// Seed the random number generator with the value of the system time 
	srand(time(0));
	// Generate the random number
	myRandom = rand() % num2 + 1;

	// *** OUTPUT ***
	// Display the calculated numbers
	printf("The quotient of %d divided by %d is %.2lf.\n", ONE_HUNDRED, num1, quotientOfNum1);
	printf("The remainder of %d divided by %d is %d.\n", ONE_HUNDRED, num2, remainderOfNum2);
	printf("2 raised to the power of %d is %d.\n", num1, powerOf2);
	printf("A random number between 1 and 9 (inclusive) is %d.\n", myRandom);
	printf("\n"); // Blank line

	return 0;
} // end main()