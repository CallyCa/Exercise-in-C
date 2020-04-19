#include <stdio.h>
#include <string.h>
#define tam 4

main(){
	
	int i,vet[tam],aux;
	for(i=0; i < tam;i++){
		scanf("%d", &vet[i]);
	}
	for(i=0;i < tam/2; i++){
		aux = vet[i];
		vet[i] = vet[i+2];
		vet[i+2] = aux;
	}
	for(i=0; i < tam;i++){
		printf("\n%d ", vet[i]);
	}
	
	
}
