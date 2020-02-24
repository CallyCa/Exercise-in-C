#include <stdio.h>

void testaPrimo(int a){
	
	int i, qnt = 0;
	for (i = 1; i <= a; i++){
		if(a % i == 0)
			qnt ++;
	}
	if(qnt == 2)
		printf("O valor %d eh primo",a );
	else
		printf("O valor %d nao eh primo",a);
}

int main(){
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num);
	testaPrimo(num);
	return 0;
	
}
