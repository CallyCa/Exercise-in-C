#include <stdio.h>

void main(){
	
	int num1,num2,par,somaImpar,prod;
	scanf("%d %d", &num1,&num2);
	if(num1 > 0 && num2 > 0){
		prod = num1 * num2;
		if(prod % 2 == 0){
			printf("Numeros lidos sao pares.\n");
			printf("Produto Par de %d e %d = %d\n", num1,num2,prod);
		}else{
			somaImpar = num1 + num2;
			printf("Numeros lidos sao impares.\n");
			printf("Soma Impar de %d e %d = %d\n", num1,num2,somaImpar);
		}
	}else{
		printf("Numeros lidos sao negativos, apresente valores positivos.\n");
	}
}
