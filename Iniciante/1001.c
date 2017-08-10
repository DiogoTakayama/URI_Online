/* **********************************************************
 * Read 2 integer values and store them in variables A and  *
 * B. Do the sum of A and B by assigning your result to the *
 * variable X. Print X.                                     *
 ************************************************************/

#include <stdio.h>

int main()
{
	int A, B, X;               
	
	scanf("%d", &A);           
	scanf("%d", &B);
	
	X = A + B;                 
	
	printf("X = %d\n", X);     
	
	return 0;
}
