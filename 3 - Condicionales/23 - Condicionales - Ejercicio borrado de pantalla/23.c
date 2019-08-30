#include<stdio.h>
#include<stdlib.h>

int main()
{
	char tecla;
	
	printf("Programa de borrado de pantalla!!!!");
	printf("\n-----------------------------------\n");
	printf("\n-----------------------------------\n");
	printf("\n-----------------------------------\n");
	printf("\n-----------------------------------\n");
	printf("\nEntra el numero 1: ");
	scanf("%c",&tecla);
	
	if(tecla == '1')
	{
		system("cls");
		printf("Se ha limpiado la pantalla!!!");
	}
	else
	{
		fflush(stdin);
		printf("\nNo ha funcionado!!!");
		printf("\nEntra el numero 1: ");
		scanf("%c",&tecla);
		if(tecla == '1')
		{
			system("cls");
			printf("Se ha limpiado la pantalla!!!");
		}
	}
	
	return 0;
}
