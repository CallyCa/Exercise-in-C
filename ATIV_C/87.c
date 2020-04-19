#include <stdio.h>
#include <string.h>

void imprimirConcac(char cid1[], char cid2[]){
	char cidade[40]="";
	strcat(cidade,cid1);
	strcat(cidade,cid2);
	printf("O nome concatenado: %s.\n",cidade);
	
}

void imprimirTamConcac(char cid1[], char cid2[]){
	int i=0, total=0;
	char cidade[40]="";
	strcat(cidade, cid1);
	strcat(cidade,cid2);
	while(cidade[i] != 0){
		i++;
		total++;
	}
	printf("As cidades concatenadas tam: %d caracteres.", total);
}
int main(){
	
	char cidade1[20],cidade2[20];
	scanf("%s", cidade1);
	scanf("%s", cidade2);
	imprimirConcac(cidade1,cidade2);
	imprimirTamConcac(cidade1,cidade2);
	
	return 0;
	
}
