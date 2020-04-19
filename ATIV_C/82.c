#include <stdio.h>
#include <string.h>
#define tam 5

void main(){
	
	int vet[tam],i,aux;
	for(i=0; i < tam; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i < tam; i++){
		printf("\nVetor: %d | posicao: %d",vet[i],i);
	}printf("\n");
	
	
	// Invertendo a ordem do vetor.
	for(i=0;i < tam/2; i++){  // Tamanho/2 eh para caso o elemento for PAR, por simetria, avancar ate a metade do vetor.
	//Caso seja impar, o elemento central eh ponto fixo.
		aux = vet[i]; // A cada contador+1 que o vetor 1 for percorrido ele ira armazenar a variavel
		// no aux.
		vet[i] = vet[tam - i-1 ]; 
		vet[tam - i -1] = aux; 
	}
	
	for(i=0; i < tam; i++){
		printf("\nVetor Invertido: %d | posicao: %d",vet[i],i);
	}printf("\n");
	

}
