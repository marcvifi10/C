#include<stdio.h>

int main()
{
	int i, n, mult;
	
	printf("Entra el numero de la tabla de multiplicar: ");
	scanf("%i",&n);
	
	for(i = 1; i < 11; i++)
	{
		mult = i * n;
		printf("%i",n);
		printf(" * ");
		printf("%i",i);
		printf(" = ");
		printf("%i",mult);
		printf("\n");
	}
	
	
	return 0;
}
