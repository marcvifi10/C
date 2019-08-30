#include<stdio.h>

int main()
{
	int horas, minutos, segundos, t1, t2, t3, total;
	
	printf("Entra el numero de horas: ");
	scanf("%i",&horas);
	
	printf("Entra el numero de minutos: ");
	scanf("%i",&minutos);
	
	printf("Entra el numero de segundos: ");
	scanf("%i",&segundos);
	
	t1 = horas * 3600;
	t2 = minutos * 60;
	t3 = segundos * 1;
	
	total = t1 + t2 + t3;
	
	printf("El total de segundos es: %i",total);
	
	
	return 0;
}
