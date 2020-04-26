#include <stdio.h>

void fatorial(int num){
	int fa=1,i;
	printf("Informe um numero: ");
	scanf("%d", &num);
	if(num > 0){
		for(i=1;i <= num;i++){
			fa = fa * i;
			printf("Fatorial de %d! * %d! = %d\n", num,i,fa);
		}
	}
	
}

int main(){
	int numm;
	fatorial(numm);
	return 0;
	
}
