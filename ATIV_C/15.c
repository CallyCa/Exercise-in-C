#include <stdio.h>

void main(){
	
	int a,b,dif;
	scanf("%d %d", &a,&b);
	if(a > b){
		dif = a - b;
		printf("A maior que b = %d", dif);
	}else{
		dif = b - a;
		printf("B maior que A = %d", dif);
	}
}
