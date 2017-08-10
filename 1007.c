/**********************************************************************
 * Read four integer values A, B, C, and D. Next, calculate and show  *
 * the difference of the product of A and B by the product of C and   *
 * D according to the formula: DIFFERENCE = (A * B - C * D).          *
 **********************************************************************/

#include <stdio.h>

int main(){
	int A, B, C, D, DIFERENCA;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);
	
	DIFERENCA = A * B - C * D;
	
	printf("DIFERENCA = %d\n", DIFERENCA);
	
	return 0;
}
