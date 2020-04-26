#include <stdio.h>

int main(){
	
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num);
	if(num < 3 && num != 3){
		printf("%d\n", num);
	}else{
		printf("Numero maior ou igual a 3.");
	}
	return 0;
	
}
