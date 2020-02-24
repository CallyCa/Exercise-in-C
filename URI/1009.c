#include <stdio.h>

int main(){
	
	char nome;
	float salf, tvsal,calc;
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	printf("Salario fixo: ");
	scanf("%f", &salf);
	printf("Total de vendas no mes em dinheiro: ");
	scanf("%f", &tvsal);
	calc = salf + (tvsal * 0.15);
	printf("TOTAL = R$ %0.2f", calc);
	
	

	return 0;
}
