#include <stdio.h>

void main(){
	
	int idade,ano, mes, dia,calc;
	scanf("%d", &idade);
	ano = (idade);
	mes = (365 / idade);
	dia = 30 /idade;
	printf("%d anos %d meses %d dias\n",ano,mes,dia);
	
}
