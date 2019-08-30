#include<stdio.h>

int main()
{
	float examen;
	
	printf("Entra la nota del examen: ");
	scanf("%f",&examen);
	
	if(examen >= 5.00)
	{
		printf("Aprobado!!!");
	}
	else
	{
		printf("Suspendido!!!");
	}
	
	return 0;
}
