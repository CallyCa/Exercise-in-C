#include <stdio.h>


int main(){
	
	int temp, ano,mes,dia;
	scanf("%d", &temp);
	
	ano = temp / 365;
	mes = temp % 365 / 30;
	dia = temp % 365 % 30;
	
	printf("%d ano(s)\n", ano);
	printf("%d mes(s)\n", mes);
	printf("%d dia(s)", dia);
	
	return 0;
}
