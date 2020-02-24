#include <stdio.h>

int main(){
	
	float num;
	scanf("%f", &num);
	
	if((num >= 0) && (num <= 25)){
		printf("Intervalo de [0,25]");
	}else if((num > 25) && (num <= 50)){
		printf("Invervalo de [25,50]");
	}else if((num > 50) && (num <= 75)){
		printf("Intervalo de [50,75]");
	}else if((num > 75) && (num <= 100)){
		printf("Intervalo de [75,100]");
	}else{
		printf("Fora do intervalo");
	}
	
	return 0;
}
