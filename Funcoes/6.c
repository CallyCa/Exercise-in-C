#include <stdio.h>
#include <math.h>

void indice(float peso, float alt){
	float imc;
	printf("Informe seu peso e altura: ");
	scanf("%f %f", &peso,&alt);
	imc = peso/pow(alt,2);
	if(imc <= 18.5){
		printf("Subnutrido ou abaixo do peso: %0.2f KG\n",imc);
	}else if(imc >= 18.6 && imc <= 24.9){
		printf("Peso ideal: %0.2f KG\n",imc);
	}else if(imc >= 25.0 && imc <= 29.9){
		printf("Levemente acima do peso: %0.2f\n",imc);
	}else if(imc >= 30.0 && imc <= 34.9){
		printf("Primeiro grau de obesidade: %0.2f\n",imc);
	}else if(imc >= 35.0 && imc <= 39.9){
		printf("Segundo grau de obesidade: %0.2f\n",imc);
	}else if(imc >= 40.0){
		printf("Obesidade mórbida: %0.2f\n",imc);
	}else{
		printf("Valores incorretos.\n");
	}
	
}

int main(){
	float pes,altur;
	indice(pes,altur);
	
	return 0;	
}
