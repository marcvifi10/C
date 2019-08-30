//Matriz traspuesta
#include<stdio.h>

int main()
{
	int numeros[3][3];
	int i, j;
	
	//Rellenar la matriz
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Entra un numero [");
			printf("%i",i);
			printf("][");
			printf("%i",j);
			printf("]: ");
			scanf("%i",&numeros[i][j]);
		}
	}
	
	printf("Esta es la matriz original: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%i",numeros[i][j]);
		}
		printf("\n");
	}
	
	printf("Esta es la matriz Transpuesta: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%i",numeros[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
