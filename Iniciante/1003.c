/****************************************************************
 * Read two integer values, in this case for variables A and B. *
 * Next, calculate the sum between them and assign it to the    *
 * variable SUM. Then print the value of this variable on the   *
 * screen.                                                      *
 ****************************************************************/

#include <stdio.h>

int main()
{
	int A, B, SOMA;
	
	scanf("%d", &A);
	scanf("%d", &B);
	
	SOMA = A + B;
	
	printf("SOMA = %d\n", SOMA);
	
	return 0;
}
