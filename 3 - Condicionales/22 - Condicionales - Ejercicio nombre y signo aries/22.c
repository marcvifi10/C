#include<stdio.h>

int main()
{
	char nombre[30], signo[20];
	
	printf("Entra tu nombre: ");
	gets(nombre);
	
	printf("Entra tu signo: ");
	gets(signo);
	
	if(strcmp(signo,"aries")==0)
	{
		printf("\nEs signo aries. \nSu nombte es: %s",nombre);
	}
	else
	{
		printf("No es signo aries!!!");
	}
	
	return 0;
}
