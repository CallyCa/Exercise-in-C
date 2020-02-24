#include <stdio.h>

int main()
{
	
	int a,b,c, soma, mult, prod;
	scanf("%i %i %i", &a,&b,&c);
	soma = a + b;
	mult = b * c;
	prod = soma * mult;
	
	printf("A soma dos dois produtos eh = %i", prod);
	
	
	
	return 0;
}
