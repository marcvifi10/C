#include<stdio.h>
#include<math.h>

int main()
{
	float hipotenusa, cateto1, cateto2;
	
	printf("Entra el cateto1: ");
	scanf("%f",&cateto1);
	
	printf("Entra el cateto2: ");
	scanf("%f",&cateto2);
	
	hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
	
	printf("La hipotenusa es: %.2f",hipotenusa);
	
	
	return 0;
}
