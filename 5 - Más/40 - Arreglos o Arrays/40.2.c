#include<stdio.h>


int main()
{
	int numeros[5]={1,2,3,4,5};
	int suma = 0;
	int i;
	
	for(i = 0; i<5; i++)
	{
		suma = suma + numeros[i];
	}
	
	printf("La suma de los elementos del vector es %i",suma);
	
	return 0;
}

