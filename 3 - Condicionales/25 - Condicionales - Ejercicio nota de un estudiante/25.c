#include<stdio.h>
#include<stdlib.h>

int main()
{
	char nota;
	
	printf("Entra la nota: ");
	scanf("%c",&nota);
	
	switch(nota)
	{
		case 'A':
			printf("Excelente");	
		break;
		
		case 'B':
			printf("Notable");	
		break;
		
		case 'C':
			printf("Aprobado");	
		break;
		
		case 'D':
		case 'F':
			printf("Reprobado");	
		break;
		
		default:
			printf("ERROR!!!");
		break;
	}
	
	return 0;
}
