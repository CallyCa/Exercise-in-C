#include <stdio.h>
#include <math.h>
void main(){
	
	float peso,alt,imc;
	scanf("%f %f", &peso,&alt);
	imc = peso / (pow(alt,2));
	printf("IMC = %0.2f\n",imc);
}
