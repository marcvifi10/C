#include<stdio.h>

int main()
{
	int n1, n2;
	
	printf("Entra dos numeros: ");
	scanf("%i %i",&n1,&n2);
	
	if(n1 % n2 == 0)
	{
		printf("Son divisibles!!!");
	}
	else
	{
		printf("No son divisibles!!!");
	}
	
	
	return 0;
}
