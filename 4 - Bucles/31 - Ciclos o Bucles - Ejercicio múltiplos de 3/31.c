#include<stdio.h>

int main()
{
	int n, i;
	
	printf("Entra el total a numeros a comprobar: ");
	scanf("%i",&n);
	
	i = 1;
	
	while(i <= n)
	{
		if(i % 3 == 0)
		{
			printf("%i",i);
			printf(" ");
		}
		
		i++;
	}
	
	
	return 0;
}
