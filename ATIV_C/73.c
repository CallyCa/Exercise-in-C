#include <stdio.h>

void main(){
	
	int vet[5],i,vet2[5];
	for(i=0;i < 5; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0;i < 5;i++){
		vet2[i]=vet[i];
		printf("\n%d ",vet2[i]);
	}
	
}
