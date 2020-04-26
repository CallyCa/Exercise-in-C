#include <stdio.h>

void acrescimo(float antig, float atual){
	float calc,soma;
	printf("Informe o valor antigo e o atual: ");
	scanf("%f %f", &antig,&atual);
	
	if(antig > 0 && atual > 0){
		calc = (atual - antig);
		soma = (calc / 100);
		printf("Percentual de acrescimo = %0.2f %%\n", soma);
		
	}else{
		printf("Valores informados errados.");
	}
}

int main(){
	float ant,at;
	acrescimo(ant,at);
	
	return 0;
}
