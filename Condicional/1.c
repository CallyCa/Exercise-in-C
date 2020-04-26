#include <stdio.h>

int main(){
	
	int a,b,dif;
	printf("Informe a e b: ");
	scanf("%d %d", &a,&b);
	if(a >= b){
		dif = a - b;
		printf("Diferenca entre %d e %d = %d\n",a,b,dif);
	}else if(b >= a){
		printf("Diferenca entre %d e %d = %d\n",b,a,dif);
	}
	
	return 0;
}
