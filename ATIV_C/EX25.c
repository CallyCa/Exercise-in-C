#include <stdio.h>
#include <math.h>

int verificaRaiz(float a){
	if(ceil(a) == a)
		return 1; // valor inteiro
	else
		return 0; // valor fracionario
}

int main(){
	
	float num,raiz;
	int flag;
	printf("Infome a raiz de um numero: ");
	scanf("%f", &num);
	raiz = sqrt(num);
	flag = verificaRaiz(raiz);
	if(flag)
		printf("%0.1f tem raiz quadrada inteira.",num);
	else
		printf("%0.1f nao possui raiz quadrada inteira.",num);
		
	return 0;
	
}
