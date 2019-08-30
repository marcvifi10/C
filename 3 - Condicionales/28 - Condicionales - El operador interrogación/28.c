#include<stdio.h>

int main()
{
	int numero;
	
	printf("Entra un numero: ");
	scanf("%i",&numero);
	
	(numero % 2 == 0) ? printf("El numero es par") : printf("El numero es impar");
	
	return 0;
}
