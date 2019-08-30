#include<stdio.h>

int main()
{
	int numeros[100], n, mayor=0, i;
	
	printf("Entra el numero de elementos que tendra el array: ");
	scanf("%i",&n);
	
	for(i = 0; i<n; i++)
	{
		printf("Digite un numero: ");
		scanf("%i",&numeros[i]);
		
		if (numeros[i] > mayor)
		{
			mayor = numeros[i];
		}
	}
	
	printf("El numero más grande del vector es: %i",mayor);
		
	return 0;
}
