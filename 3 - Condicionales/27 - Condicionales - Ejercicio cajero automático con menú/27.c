#include<stdio.h>

int main()
{
	int opcion;
	float agregar, retirar, saldo = 1000;
	
	printf("\tBienvenido a su Cajero Virtual");
	printf("\n1. Ingreso en cuenta");
	printf("\n2. Retirar dinero");
	printf("\n3. Salir");
	printf("\nOpcion: ");
	scanf("%i",&opcion);
	
	switch(opcion)
	{
		case 1:
			printf("\nCuanto desea ingresar?");
			scanf("%f",&agregar);
			saldo = saldo + agregar;
			printf("El saldo total es: %f",saldo);
		break;
		
		case 2:
			printf("\nCuanto desea retirar?");
			scanf("%f",&retirar);
			if(retirar > saldo)
			{
				printf("No tienes suficiente saldo!!!");
			}
			else
			{
				saldo = saldo - retirar;
				printf("El saldo total es: %f",saldo);
			}
		break;
		
		case 3: 
		
		break;
		default:
			printf("ERROR!!!");
		break;
	}
	
	
	return 0;
}
