#include <stdio.h>

void main(){
	
	int i, vet[2],vet2[2],vet3[2];
	for(i=0; i < 2; i++){
		printf("Primeiro vetor: ");
		scanf("%d", &vet[i]);
	}
	
	for(i = 0;i < 2;i++){
		printf("Segundo vetor: ");
		scanf("%d", &vet2[i]);
	}
	
	for(i=0;i <2; i++){
		 vet3[i]=vet[i] * vet2[i];
	} 
	
	for(i=0;i < 2;i++){
		printf("Posicao: %d e mult: %d\n", i,vet3[i]);
	}
	 
}
