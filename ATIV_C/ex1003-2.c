#include <stdio.h>

int main(){
	int n1,n2;
	int soma;
	printf("Informe o valor 1 e 2: ");
	scanf("%d %d", &n1,&n2);
	soma = somaNum(n1,n2);
	printf("O valor da soma = %d", soma);
	
	return 0;
}

int somaNum(int a,int b){
	int x;
	x = (a + b);
	return x;
}
