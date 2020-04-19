#include <stdio.h>
#include <math.h>

void main(){
	
	float r,pi = 3.14,areaB, areaL, alt, m2 = 100,areaT,preco;	
	scanf("%f %f", &r,&alt);
	areaB = pi * pow(r,2) * 2;
	areaL = 2 * pi * r * alt;
	areaT = (areaB + areaL);
	preco = areaT * m2;
	printf("Area Total = %0.2f m2 \n",areaT);
	printf("Preco = R$ %0.2f\n",preco);
	
	
}
