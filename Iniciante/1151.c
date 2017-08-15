/*#include <stdio.h>

int main()
{
	int num, cont, a = 0, b = 1, c = 0;	
	scanf("%d", &num);
	
	for(cont = 1; cont < num; cont++)
	{
		if( cont % 2 == 1)
		{
			printf("%d ", c);
			c = a + b;
			a = c;
		}
		else if(cont == 2)
			printf("%d ", c);
		else if(cont % 2 == 0)
		{
			printf("%d ", c);
			c = a + b;
			b = c;
		}
	}
	printf("%d\n", c);
	return 0;
}*/

//As duas opcoes serviram para a questao do URI

#include <stdio.h>

int main()
{
	int n;
	int fib[46];
	
	scanf("%d%", &n);
	
	fib[0] = 0;
	fib[1] = 1;
	
	printf("%d %d", fib[0], fib[1]);
	
	for(int i = 2; i < n; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
		
		if(i == (n-1))
			printf(" %d", fib[i]);
		else
			printf(" %d", fib[i]);
    }
    printf("\n");
    return 0;
}
