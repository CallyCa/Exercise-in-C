#include <stdio.h>

int main(){
	
	char nome[60];
	int cod = 0;
	scanf("%s", nome);
	while(cod <= 10){
		cod+=1;
		printf("%s\n %d:",nome,cod);
	}
	
	return 0;
}
