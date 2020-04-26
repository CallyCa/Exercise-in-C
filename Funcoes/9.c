#include <stdio.h>
#include <math.h>

void expoente(int base,int exp){
	int calc;
	printf("Informe a base e o expoente: ");
	scanf("%d %d", &base,&exp);
	calc = pow(base,exp);
	printf("%d elevado a %d = %d\n",base,exp,calc);
}

int main(){
	int bas,expo;
	expoente(bas,expo);
	return 0;
}
