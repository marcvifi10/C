#include<stdio.h>

int main()
{
	float precio, total, descuento;
	
	printf("Entra el total de la compra: ");
	scanf("%f",&total);
	
	descuento = total * 0.15;
	precio = total - descuento;
	
	printf("Total: %.2f",precio);
	
	
	return 0;
}
