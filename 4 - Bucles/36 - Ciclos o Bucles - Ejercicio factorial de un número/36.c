#include<stdio.h>

int main()
{
	int i, num, factorial = 1;
	
	printf("Entra un numero: ");
	scanf("%i",&num);
	
	for(i=1; i <= num; i++)
	{
		factorial *= i;
	}
	
	printf("El factorial es: %i",factorial);
	
	return 0;
}
