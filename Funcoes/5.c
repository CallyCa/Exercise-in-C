#include <stdio.h>

void pesIdeal(float alt,int sexo){
	float calc;
	
	printf("Informe sua altura: ");
	scanf("%f", &alt);
	printf("Informe seu sexo: M ou F: ");
	scanf("%d", &sexo);
	if(sexo == 1){
		calc = (72.7 * alt) - 58;
		printf("Peso ideal masculino: %0.2f\n",calc);
	}else if(sexo == 2){
		calc = (62.1 * alt) - 44.7;
		printf("Peso ideal feminino: %0.2f\n",calc);
	}else{
		printf("Valores incorretos.\n");
	}
	
}

int main(){
	float altur;
	int sex;
	pesIdeal(altur,sex);
	
	return 0;
}
