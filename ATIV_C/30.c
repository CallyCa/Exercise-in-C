#include <stdio.h>

void main(){
	
	int a,b;
	scanf("%d %d", &a,&b);
	if(b % a == 0 || a % b == 0){
		printf("Sao multiplos.\n");
	}else{
		printf("Nao sao multiplos.\n");
	}
	
	
}
