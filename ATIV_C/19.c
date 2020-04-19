#include <stdio.h>

void main(){
	
	int num;
	scanf("%d", &num);
	if(num > 1 && num < 100){
		printf("Numero %d na faixa de 1 a 100\n", num);
		if(num % 3 == 0){
			printf("Numero divisivel por 3");
		}else{
			printf("Este numero nao eh divisivel por 3.");
		}
	}
}
