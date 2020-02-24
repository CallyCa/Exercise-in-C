#include <stdio.h>

int main(){
	
	int n100,n50,n10,n5,n1,real;
	scanf("%d", &real);
	
	n100 = real / 100;
	real -= n100 * 100;
	n50 = real / 50;
	real -= n50 * 50;
	n10 =  real / 10;
	real -= n10 * 10;
	n5 = real / 5;
	real -= n5 * 5;
	n1 = real;
	
	printf("%d notas de 100 reais\n", n100);
	printf("%d notas de 50 reais\n", n50);
	printf("%d notas de 10 reais\n", n10);
	printf("%d notas de 5 reais\n", n5);
	printf("%d notas de 1 real", n1);
	
	
	return 0;
}
