#include <stdio.h>

int main(){
	
	int a,b,prod,soma;
	printf("Informe a e b: ");
	scanf("%d %d", &a,&b);
	if(a > 0 && b > 0){
		prod = a * b;
		printf("Produto de %d e %d = %d\n", a,b,prod);
	}else{
		soma = a+b;
		printf("Soma de %d e %d = %d\n", a,b,soma);
	}
	return 0;
}
