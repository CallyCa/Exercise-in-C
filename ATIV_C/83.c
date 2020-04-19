#include <stdio.h>
#define max 5

void main(){
	int vet[5],imp, i;
	for(i=0;i < max; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i < max; i++){
		if(vet[i] % 2 !=0){
			imp = vet[i];	
			printf("\nLista de Impares: %d", imp);
		}
	}		
}
	
