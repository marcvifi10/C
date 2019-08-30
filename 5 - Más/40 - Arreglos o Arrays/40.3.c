#include<stdio.h>

int main()
{
	int numeros[100], n, i;
	
	printf("Entra el numero de elementos que va a tener el array: ");
	scanf("%i",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Entra un numero: ");
		scanf("%i",&numeros[i]);//Guardando todos los elementos del vector		
	}
	
	//Ahora. vamos a mostrar los elementos con sus indices asociados
	
	for(i = 0; i<n; i++)
	{
		printf("%i",&numeros[i]);
		printf(" ");
	}
	
	return 0;
}
