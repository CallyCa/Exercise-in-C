#include <stdio.h>

int main()
{
	float real, dol = 1.67, conv;
	printf("Infome o Real: R$ ");
	scanf("%f", &real);
	conv = real / dol;
	printf("Dolar = %0.2f", conv);
	
	
	
	return 0;
}
