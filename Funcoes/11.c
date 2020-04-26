#include <stdio.h>

void divisores(int num){
	int i,soma;
	printf("Informe um numero: ");
	scanf("%d", &num);
	if(num > 0){
		for(i=1;i <= num;i++){
			if(num % i == 0){
				printf("Divisores: %d\n",i);
				soma+=i;
			}
		}printf("Soma dos divisores de %d: %d\n", num,soma);
	}
}

int main(){
	int numero;
	divisores(numero);
	return 0;
	
}
