#include <stdio.h>

void main(){
	
	int num;
	scanf("%d", &num);
	if(num >= 1 && num <= 9){
		printf("Faixa permitida\n");
	}else{
		printf("Fora da faixa\n");
	}
}
