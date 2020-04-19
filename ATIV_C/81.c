#include <stdio.h>
#define tam 4
#include <string.h>

void main(){
	
	int soma[tam],vet1[tam],vet2[tam],inter[tam];
	int vet3[tam + tam],i,dif[tam],mult[tam];
	for(i=0;i < tam;i++){
		printf("Vetor 1: ");
		scanf("%d",&vet1[i]);
	}
	for(i=0;i < tam;i++){
		printf("Vetor 2: ");
		scanf("%d",&vet2[i]);
		
	}
	for(i=0;i < tam;i++){
		soma[i]=vet1[i] + vet2[i];
		printf("\n\nSoma: %d e posicao: %d", soma[i],i);
	}
	for(i=0;i < tam;i++){
		mult[i]= vet1[i] * vet2[i];
		printf("\n\nMult: %d e posicao: %d", mult[i],i);
	}
	for(i = 0; i < tam;i++){
		if(vet1[i] > vet2[i]){
			dif[i] = vet1[i] - vet2[i];
		}else if(vet2[i] > vet1[i]){
			dif[i] = vet2[i] - vet1[i];
		}printf("\n\nDiferenca: %d e posicao: %d",dif[i],i);
	}
	for(i=0;i < tam; i++){
		if(vet1[i] == vet2[i]){
			inter[i] = vet1[i];
			printf("\n\nIntersecao: %d e posicao: %d",inter[i],i);
		}	
	}
	
	//Copia vetor 1 para a primeira metade do vetor vazio 3.
	memcpy(vet3,vet1, sizeof(vet1));
	// Copia vetor 2 para a segunda metade do vetor 3.
	memcpy((vet3 + tam),vet2,sizeof(vet2));
	
	for(i=0;i < tam+tam;i++){ // TAM + TAM Significa que eh para alocar um tamanho de 8 posicoes para juntar as 2 listas.
		printf("\n\nLISTA: %d", vet3[i]); // Imprime a Lista completa com o vetor 1 e 2.
	}
}
