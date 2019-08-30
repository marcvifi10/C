#include<stdio.h>

int main()
{
	float salario, aumento, salario_final;
	
	printf("Entra tu salario: ");
	scanf("%f",&salario);
	
	aumento = salario * 0.25;
	salario_final = salario + aumento;
	
	printf("Salario final: %.2f",salario_final);
	
	
	return 0;
}
