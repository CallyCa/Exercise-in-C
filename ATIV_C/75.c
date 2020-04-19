#include <stdio.h>
#define tam 3
void main(){
	
	int vet[3],soma,maior=0,menor=100,i;
	for(i=0; i < tam; i++){
		scanf("%d", &vet[i]);
		soma +=vet[i];
		if(vet[i] > maior){
			maior = vet[i];
		}else if(vet[i] < menor){
			menor = vet[i];
		}
	}printf("Soma dos numeros: %d\n",soma);
		printf("Maior: %d\n",maior);
		printf("Menor: %d\n",menor);
	
	
	
}
