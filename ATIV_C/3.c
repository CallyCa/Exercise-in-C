#include <stdio.h>

void main(){
	
	int cod1,pc1,cod2,pc2;
	float pg1,pg2,calc;
	scanf("%d %d %f", &cod1,&pc1,&pg1);
	scanf("%d %d %f", &cod2,&pc2,&pg2);
	calc = (pc1 * pg1) + (pc2 * pg2);
	printf("Valor a pagar: R$ %0.2f\n",calc);
	
}
