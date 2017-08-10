/********************************************************************
 * Read two integer values. Then calculate the product between      *
 * these two values and assign this operation to the PROD variable. *
 * Then show the variable PROD.                                     *
 ********************************************************************/

#include <stdio.h>

int main()
{
	int A, B, PROD;
	
	scanf("%d", &A);
	scanf("%d", &B);
	
	PROD = A * B;
	
	printf("PROD = %d\n", PROD);
	
	return 0;
}
