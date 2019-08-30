#include<stdio.h>
#include<math.h>

int main()
{
	int base_M, base_m, area, altura;
	
	printf("Entra la base mayor: ");
	scanf("%i",&base_M);
	
	printf("Entra la base menor: ");
	scanf("%i",&base_m);
	
	printf("Entra la altura: ");
	scanf("%i",&altura);
	
	area = ((base_M + base_m) * altura) / 2;
	
	printf("El area es: %i",area," cm2");
	
	return 0;
}
