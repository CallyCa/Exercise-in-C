#include <stdio.h>

int main()
{
	
	float preco, valor;
	int qnt;
	scanf("%f %i", &preco, &qnt);
	valor = preco * qnt;
	printf("Total = R$ %0.2f", valor);
	
	
	return 0;
}
