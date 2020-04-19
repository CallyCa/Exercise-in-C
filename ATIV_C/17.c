#include <stdio.h>

void main(){
	
	int num1,num2;
	scanf("%d",&num1);
	scanf("%d",&num2);
	if(num1 % 2 == 0 && num1 % 3 == 0 && num2 % 2 == 0 && num2 % 3 == 0){
		printf("Valores por 2 e 3 = %d e %d\n", num1,num2);
	}else{
		printf("Numeros inseridos nao sao divisiveis por 2 e 3");
	}
	
	
}
