//Copiar el contenido de una matriz a otra
#include<stdio.h>;

int main()
{
	int numeros[2][2] = {{1,2},{3,4}};
	int matriz2[2][2];
	int i, j;
	
	//Pasando el contenido de numeros hacia matriz2
	for(i = 0; i<2; i++)
	{
		for(j = 0; j<2; j++)
		{
			matriz2[i][j] = numeros[i][j];
		}
	}
	
	//Mostrando matriz2
	for(i = 0; i<2; i++)
	{
		for(j = 0; j<2; j++)
		{
			printf("%i",matriz2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
