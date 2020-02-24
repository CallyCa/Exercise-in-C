#include <stdio.h>

int fatorial(int valor){
	int i, fat = 1;
	for(i = 1;i < valor; i++){
		fat *= i;
	}
	return fat;
	
}

int main(){
	int num, result;
	printf("Infome um numero: ");
	scanf("%d", &num);
	result = fatorial(num);
	printf("O fatorial de %d = %d", num, result);
	return 0;
}


