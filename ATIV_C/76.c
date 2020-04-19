#include <stdio.h>

void main(){
	
	int i, vet[5],local;
	for(i=0;i < 5; i++){
		scanf("%d", &vet[i]);
	}
	printf("Localizar: ");
	scanf("%d", &local);
	for(i=0;i < 5; i++){
		if(local == vet[i]){
			printf("Posicao %d e numero %d\n",i,vet[i]);
		}else{
			printf("Numero nao esta no vetor.\n");
			break;
		}
	}
	
}
