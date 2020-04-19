#include <stdio.h>

void main(){
	int num,i=0,maior=0,menor=100;
	while(i < 3){
		i+=1;
		scanf("%d", &num);
		if(num > maior){
			maior = num;
		}else{
			menor = num;
		}
	}printf("Maior = %d\n",maior);
	printf("Menor = %d\n",menor);
	
	
}
