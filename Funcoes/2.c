#include <stdio.h>

// Ex: 02

typedef struct Parametro{
	int num;
	
}Parametro;

Parametro pedir(){
	Parametro pa;
	return pa;

}

void selec(Parametro pa){
	printf("Informe um numero: ");
	scanf("%d", pa.num);
	if(pa.num %  3 == 0 && pa.num % 4 == 0){
		printf("1\n");
	}else{
		printf("0\n");
	}
}

int main(){
	Parametro numero;
	numero = pedir();
	selec(numero);
	
	
}
