#include <stdio.h>

void main(){
	
	int maior,i,pos;
	int lista[4];
	for(i=0;i < 4;i++){
		scanf("%d", &lista[i]);
	}
	
	maior = lista[1];
	
	for(i=0;i < 4;i++){
		if(lista[i] > maior){
		maior = lista[i];
		pos = i+1;
		}
	}
	printf("%d\n", maior);
	printf("%d\n", pos);
}
