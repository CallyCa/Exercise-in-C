#include <stdio.h>

int main(){
	
	int ano,mes,idade;
	float dia;
	scanf("%d %d %d", &ano,&mes,&dia);
	dia += ano * 365;
	dia += mes * (365/12);
	printf("%0.2f dias", dia);
	
	
	
	return 0;
}
