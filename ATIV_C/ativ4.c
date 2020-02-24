#include <stdio.h>

int main(){
	
	float r,m, areatotal,alt, pi = 3.14,prec;
	scanf("%f %f &f", &r,&m, &alt);
	areatotal = (pi * (r * r * 2) + (2 * pi * r * alt));
	prec = areatotal * 100.00;
	
	printf("Area total = %0.2f m2 e R$: %0.2f", areatotal, prec);
	
	return 0;
}
