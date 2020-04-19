#include <stdio.h>

void main(){
	
	int i,cod[3],qnt50=0,cad[3];
	float valor[3],soma,media;
	for(i=0;i < 3;i++){
		printf("Codigo e valor: ");
		scanf("%d %f",&cod[i],&valor[i]);
		soma += valor[i];
	}
	
	for(i=0;i < 3;i++){
		if(valor[i] > 100.00){
			cad[i] = cod[i];// PARA ARMAZENAR O VALOR EM OUTRO VETOR. .
			printf("\n---Codigos: %d\n",cod[i]); // PARA IMPRIMIR OS VALORES ARMAZENADOS NO VETOR.
			printf("\n");
		}else if(valor[i] < 50.00){
			qnt50+=1;
		}
	}
	media = soma / 3;
	printf("Media das compras = %0.2f\n",media);
	printf("Quantidade menor 50: %d\n", qnt50);
}
