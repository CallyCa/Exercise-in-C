#include <stdio.h>

void main(){
	
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if(a % 5 == 0 && b % 5 == 0 && c % 5==0){
		printf("Multiplos de 5 = %d, %d e %d\n",a,b,c);
	}
	
}
