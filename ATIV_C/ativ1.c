#include <stdio.h>

int main(){
	
	int idade,dia = 24 ,hr = 60,min = 60 ,seg = 60;
	float ano = 365.25,calc;
	scanf("%d", &idade);
	calc = (dia * hr * min * seg) * idade;
	printf("O coracao batera por %0.2f vezes", calc);
	return 0;
}
