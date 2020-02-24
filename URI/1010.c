#include <stdio.h>

int main(){
	int cod1,qnt1,cod2,qnt2;
	float vl1,vl2,calc;
	scanf("%d %d %f", &cod1 ,&qnt1, &vl1);
	scanf("%d %d %f", &cod2 ,&qnt2, &vl2);
	calc = (qnt1 * vl1) + (qnt2 * vl2);
	printf("VALOR A PAGAR = R$ %0.2f", calc);
	return 0;
}
