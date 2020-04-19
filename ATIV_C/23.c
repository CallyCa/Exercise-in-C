#include <stdio.h>

void main(){
	
	int num,count = 0,soma;
	scanf("%d", &num);
	if(num > 0){
		while(count < num){
			count+=1;
			soma = soma + count;
			printf("%d\n",count);
			
		}printf("Soma dos numeros = %d\n",soma);
		
	}else{
		printf("Numero informado eh negativo.\n");
	}
	
	
	
}
