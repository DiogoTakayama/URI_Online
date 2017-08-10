/* **********************************************************
 * Read 2 integer values and store them in variables A and  *
 * B. Do the sum of A and B by assigning your result to the *
 * variable X. Print X.                                     *
 ************************************************************/

#include <stdio.h>

int main()
{
	int A, B, X;               // Declares the variables.
	
	scanf("%d", &A);           // Reads the variables.
	scanf("%d", &B);
	
	X = A + B;                 // Operates the sum of the variables.
	
	printf("X = %d\n", X);     // Prints the result of the summation on the screen.
	
	return 0;
}
