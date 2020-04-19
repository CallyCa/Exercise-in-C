#include <stdio.h>

void main(){
	
	int num,neg;
	scanf("%d", &num);
	if(num > 0){
		printf("Valor positivo = %d\n",num);
	}else if(num < 0){
		neg = num * -1;
		printf("Valor Negativo = %d\n",num);
		printf("Valor Positivo = %d\n",neg);
	}
}
