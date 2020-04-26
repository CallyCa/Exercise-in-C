#include <stdio.h>

int main(){
	
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num);
	if(num >= 1 && num <= 100){
		printf("Numero esta na faixa de 1 a 100\n");
	}else{
		printf("Numero nao esta na faixa de 1 ate 100\n");
	}
	return 0;
}
