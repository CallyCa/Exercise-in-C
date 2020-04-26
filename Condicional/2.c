#include <stdio.h>

int main(){
	int num,mult;
	printf("Informe um numero: ");
	scanf("%d", &num);
	if(num < 0){
		mult = num * -1;
		printf("Numero multiplicado por [-1]: %d\n",mult);
	}else{
		printf("Numero positivo: %d\n",num);
	}
	
	return 0;
}
