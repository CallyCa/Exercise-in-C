#include <stdio.h>

void main(){
	
	int vet[5],i,local;
	for(i=0;i < 5;i++){
		scanf("%d", &vet[i]);
	}
	printf("localizar: ");
	scanf("%d", &local);
	for(i=0;i <5;i++){
		if(local == vet[i]){
			printf("posicao %d , valor = %d", i,vet[i]);
		}
	}
}
