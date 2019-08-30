#include<stdio.h>
#include<stdlib.h>

int main()
{
	int numero;
	
	printf("Entra un numero (1 - 3): ");
	scanf("%i",&numero);
	
	switch(numero)
	{
		case 1:
			printf("Es el numero 1");
		break;
		
		case 2:
			printf("Es el numero 2");
		break;
		
		case 3:
			printf("Es el numero 3");
		break;
		
		default:
			printf("No es ni 1, ni 2, ni 3");
		break;
	}
	
	return 0;
}
