#include<stdio.h>

int main()
{
	int n1, n2;
	
	printf("Entra dos numeros: ");
	scanf("%i %i",&n1,&n2);
	
	if(n1>n2)
	{
		printf("El mayor es: %i",n1);
	}
	else if(n2>n1)
	{
		printf("El mayor es: %i",n2);
	}
	else
	{
		printf("Son iguales!!!");
	}
	
	return 0;
}
