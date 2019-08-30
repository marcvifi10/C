//Rellenando una matriz

#include<stdio.h>;

int main()
{
	int numeros[100][100], filas, columnas, i, j;
	
	printf("Entra el numero de filas que quieres que tenga la matriz: ");
	scanf("%i",&filas);
	
	printf("Entra el numero de columnas que quieres que tenga la matriz: ");
	scanf("%i",&columnas);
	
	//Almacenando elemntos en la matriz
	for(i=0; i<filas; i++)
	{
		for(j=0; j<columnas; j++)
		{
			printf("Entra un numero [");
			printf("%i",i);
			printf("][");
			printf("%i",j);
			printf("]: ");
			scanf("%i",&numeros[i][j]);
		}
	}
	
	//Mostrando la matriz
	for(i=0; i<filas; i++)
	{
		for(j=0; j<columnas; j++)
		{
			printf("%i",numeros[i][j]);
		}
		//Hacemos un salto de linea
		printf("\n");
	}
	
	return 0;
}
