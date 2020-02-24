#include <stdio.h>

int main()
{
	
	int num;
	printf("Digite um numero: ");
	scanf("%i", &num);
	if(num == 0)
		printf("Numero eh zero.");
	else if(num > 0)
		printf("Numero eh maior que zero");
	else
		printf("Numero eh menor que zero");
	return 0;
}
