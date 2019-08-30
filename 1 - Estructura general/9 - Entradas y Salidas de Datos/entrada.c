#include<stdio.h>

int main()
{
	int suma = 10, a = 10;
	float b = 15.5;
	char c = 'e';
	char s[500];
	int d;
	
	printf("La suma es: %i",suma,"\r");
	printf("%i %.1f %c",a,b,c);
	
	printf("Entra el valor de la variable a: ");
	scanf("%i",&d);
	
	printf("Entra tu nombre: ");
	scanf("%s",s);
	
	printf("El valor de a es: %i",d);
	printf("Tu nombre es: %s",s);
	
	return 0;
}
