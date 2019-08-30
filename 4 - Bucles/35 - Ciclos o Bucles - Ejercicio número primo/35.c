#include<stdio.h>

int main()
{
	int i, num, cont;
	
	printf("Entra un numero: ");
	scanf("%i",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			cont++;
		}
	}
	
	if(cont > 3)
	{
		printf("\nEl numero es compuesto");
	}
	else
	{
		printf("\nEl numero es primo");
	}
	
	return 0;
}
