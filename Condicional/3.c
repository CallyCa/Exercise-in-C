#include <stdio.h>

int main(){
	
	int count=0,num;
	while(count < 4){
		printf("Informe um numero: ");
		scanf("%d", &num);
		count+=1;
		if(num % 2 == 0 && num % 3 == 0){
			printf("Numeros divisiveis por 2 e 3: %d\n",num);
		}else{
			printf("Numero(s) %d nao eh divisivel por 2 e 3.\n",num);
		}
	}
	return 0;
}
