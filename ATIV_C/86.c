#include <stdio.h>
#include <string.h>
int main(){
	
	int i;
	char letra[100],tam;
	scanf("%s", &letra);
	printf("Frase: %s\n",letra);
	tam = strlen(letra);
	
	for(i=0;i < tam/2;i++){
		printf("%c", letra[i]);
	}
	
	for(i=tam - 1; i >= tam/2; i--){
		printf("%c",letra[i]);
	}
	
}
