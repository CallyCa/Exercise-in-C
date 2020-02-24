#include <stdio.h>

void inversor(int a){
	int resto, valor,total=0;
	while(a / 10 > 0){
		resto  = a % 10;
		printf("%d", resto);
		valor = resto * (10 * total);
		a = a / 10;
	}
	printf("%d", a%10);
}

int main(){
	int num;
	printf("Informe os numeros: ");
	scanf("%d", &num);
	printf("Inversor de %d eh = ",num);
	inversor(num);
	return 0;
}
