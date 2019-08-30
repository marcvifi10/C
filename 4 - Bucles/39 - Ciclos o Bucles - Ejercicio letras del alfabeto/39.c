#include<stdio.h>

int main()
{
	char letra = 'a';
	
	do
	{
		printf("%c",letra);
		printf(" ");
		letra++;
	}
	while(letra <= 'z');
	
	
	return 0;
}
