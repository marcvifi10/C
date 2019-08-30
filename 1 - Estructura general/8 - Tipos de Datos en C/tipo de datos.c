#include<stdio.h>

int main()
{
	char a = 'e'; // RANGO = tamaño 1 byte: 0 ... 255
	short b = -15; // RANGO = tamaño 1 byte: -128 ... 127
	int c = -15; // RANGO = tamaño 2 bytes: -32768 ... 32767
	unsigned int d = 128; // RANGO = tamaño 2 bytes: 0 ... 65535
	long e = 123456; // RANGO = tamaño 4 bytes: -infinito ... infinito
	float f = 15.678; // tamaño = 4 bytes
	double m = 131.12332155; // tamaño = 8 bytes
	
	printf("El elemento es: %c",a);
	printf("El elemento es: %d",b);
	printf("El elemento es: %d",c);
	printf("El elemento es: %d",d);
	printf("El elemento es: %li",e);
	printf("El elemento es: %.2f",f);
	printf("El elemento es: %.lf",m);
	
	return 0;
}
