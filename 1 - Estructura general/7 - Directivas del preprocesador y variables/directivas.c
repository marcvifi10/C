// Directivas del Procesador y Variables

#include<stdio.h>
#include<string.h>
#include<math.h>

// Declaramos una variable PI global
#define PI 3.1416 // Macro

int main()
{
	int x = 10, y = 3;
	float suma = 0;
	
	suma = x + y;
	
	// %.2f = redondea a 2 decimales
	printf("La suma es: %.2f",suma);
	
	
	return 0;
}
