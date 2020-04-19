#include <stdio.h>
#define tam 4 // Ira facilitar o tamanho do vetor, para nao precisar alterar
// todas as linhas.

void main(){
	//Coletando os numeros e colocando-as no vetor
	int i,list[tam],aux,j;
	for(i=0; i < tam; i++){
		scanf("%d", &list[i]);
	}
	//Imprimindo a lista informada
	for(i=0 ; i < tam;i++){
		printf("\n%d\n",list[i]);
	}
	
	//Invertendo a ordem do vetor
	for(i=0; i < tam/2; i++){  // Tam/2 eh para CASO o elemento for PAR, por simetria, avancar ate a metade
	//do vetor eh suficiente, e no CASO IMPAR, o elemento central eh ponto fixo.
		aux = list[i];	//aqui eh a maneira certa de troca.
		list[i] = list[tam - i -1]; // Aqui declara que o vetor estara subtraindo o (TAM - i) - 1 ou seja 
		// (4 - 0 - 1 = 3) , (4 - 1 - 1=2)...
		list[tam - i - 1]= aux;
	}
	//Imprimindo o vetor invertido
	for(i=0;i < tam;i++){
		printf("\n%d", list[i]);
	}
	
	
}
