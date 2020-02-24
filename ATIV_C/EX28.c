#include <stdio.h>

int potencia(int base,int exp){
	int i, valor=1;
	for (i=1;i <= exp; i++){
		valor = valor * base;	
	}
	return valor;
}

int totalDigitos(int a){
	int total=1;
	while(a/10 > 0){
		a  = a / 10;
		total ++;
	}
	return total;
}

int inversor(int a){
	int resto, valor=0, total;
	total = totalDigitos(a);
	while(a/10 > 0){
		resto = a % 10;
		valor = valor + resto * (potencia(10, (total - 1)));
		a = a / 10;
		total--;
	}
	valor = valor + (a % 10) * (potencia(10, (total - 1)));
	return valor;
}

int main(){
	
	int num, invertido;
	printf("Informe os numeros: ");
	scanf("%d", &num);
	invertido = inversor(num);
	printf("O valor invertido de %d = %d", num, invertido);
	return 0;
}
