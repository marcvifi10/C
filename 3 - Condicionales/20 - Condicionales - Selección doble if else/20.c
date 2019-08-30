#include<stdio.h>

int main()
{
	float nota;
	
	printf("Entra una nota: ");
	scanf("%f",&nota);
	
	if(nota >= 5)
	{
		printf("Aprobado!!!");
	}
	else
	{
		printf("Suspendido!!!");
	}
	
	return 0;
}
