#include<stdio.h>

int main()
{
	int num, i, x;
	scanf("%d", &num);
	
	for (i = 1; i <= (4 * num - 1); i += 4) 
	{
		for (x = i; x <= i + 2; x++) 
		{
			printf("%d ", x);			
		}
		printf("PUM\n");		
	}

}
