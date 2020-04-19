#include <stdio.h>

int main(){
	
	char letra[100];
	int cont=0,i;
	scanf("%s", &letra);
	for(i=0;i < 100;i++){
		if(letra[i] == 'a' || letra[i] == 'e' || letra[i] == 'i' || letra[i] == 'o' || letra[i] == 'u'){
			cont+=1;
		}
	}
	printf("Quantidade de vogais: %d vogais\n",cont);
	
}
