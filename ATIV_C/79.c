#include <stdio.h>
#define tam 4

void main(){
	
	int list[tam], i,menor;
	for(i=0;i < tam; i++){
		scanf("%d", &list[i]);
	}
	
	menor = list[0];
	
	for(i=1;i < tam; i++){ //PERCORRE A LISTA INTEIRA
		if(list[i] <= menor){ // VERIFICA SE ALGUM NUMERO EH MENOR QUE O LIST NA POSICAO [0].
			menor = list[i]; // ARMAZENA O VALOR MENOR.
		}
	}
	
	for(i=0;i < tam; i++){ // PERCORRE A LISTA NOVAMENTE
		if(list[i] == menor){ // FAZ UMA VERIFICACAO SE O MENOR EH REALMENTE O NUMERO 
			printf("Menor elemento: %d e posicao: %d\n",menor,i);
		}
	}
	
	
}


