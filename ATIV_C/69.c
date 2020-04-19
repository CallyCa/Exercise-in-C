#include <stdio.h>

void main(){
	
	int lista[5],dif,i,maior=0,menor=100;
	for(i=0;i < 5; i++){
		scanf("%d", &lista[i]);
		if(lista[i] > maior){
			maior = lista[i];
		}else if(lista[i] < menor){
			menor = lista[i];
		}
	}
	dif = maior - menor;
	printf("Maior: %d\n",maior);
	printf("Menor: %d\n",menor);
	printf("Diferenca do maior pelo menor: %d\n",dif);
}
