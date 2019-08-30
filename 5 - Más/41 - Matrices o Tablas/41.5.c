//Determinar si una matriz es simétrica
#include<stdio.h>

int main()
{
	int numeros[100][100], filas, columnas;
	char band='F';
	int i, j;
	
	std::cout<<"Entra el numero de filas: ";
	std::cin>>filas;
	
	std::cout<<"Entra el numero de columnas: ";
	std::cin>>columnas;
	
	for(i=0; i<filas; i++)
	{
		for(j=0; j<columnas; j++)
		{
			std::cout<<"Entra un numero ["<<i<<"]["<<j<<"]: ";
			std::cin>>numeros[i][j];
		}
	}
	
	if(filas==columnas)
	{
		for(i=0; i<filas; i++)
		{
			for(j=0; j<columnas; j++)
			{
				if(numeros[i][j] == numeros[j][i])
				{
					band = 'V';
				}
			}
		}
	}
	
	if(band == 'V')
	{
		std::cout<<"La matriz es simetrica!!!";
	}
	else
	{
		std::cout<<"La matriz NO es simetrica!!!";
	}
	
	getch();
	return 0;
}
