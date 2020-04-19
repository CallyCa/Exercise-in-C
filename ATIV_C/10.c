#include <stdio.h>

void main(){
	
	int codVen,numCar;
	float valCar,salFix,calc, perc = 0.05;
	scanf("%d %d", &codVen,&numCar);
	scanf("%f %f", &valCar,&salFix);
	calc = (numCar * valCar * perc) + salFix;
	printf("Codigo Vendedor = %d\n", codVen);
	printf("Salario total + 5%% = R$ %0.2f\n",calc);
}
