#include <stdio.h>

//Ex: 01

typedef struct Parametros{
	int num;
	
}Parametros;

Parametros pedir(){
	Parametros pa;
	return pa;
}

void teste(Parametros pa){
	printf("Informe um numero: ");
	scanf("%d", &pa.num);
	if(pa.num > 0){
		printf("Numero positivo.");
	}else{
		printf("Numero negativo");
	}
}

int main(){
	Parametros numero;
	numero = pedir();
	teste(numero);
	return 0;
}

