#include <stdio.h>


int main(){
	
	int codv, qntcar;
	float valcar,salf,acres,calc;
	scanf("%d %d", &codv,&qntcar);
	scanf("%f %f", &valcar,&salf);
	calc = (salf * 0.05 * qntcar) + salf;
	printf("Acrescimo de 5%%\n");
	printf("Salario Acrescimo: R$ %0.2f", calc);
	return 0;
}
