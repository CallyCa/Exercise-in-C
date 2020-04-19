#include <stdio.h>

void main(){
	
	
	int idade,dia = 24,hr = 60, min=60;
	float ano = 365.25;
	int calcAno,calcDia,calcHr,calcMin,calc;
	scanf("%d", &idade);
	calc = idade * ano*dia*hr*min;
	printf("%d vezes \n ", calc);
	
	
}
