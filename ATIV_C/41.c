#include <stdio.h>

void main(){
	
	int a,b,count=0,soma,qnt;
	scanf("%d", &a);
	scanf("%d", &b);
	while(a > count && count < b ){
		count+=1;
		if(a % b == 0){
			qnt+=1;
			soma += qnt;
		}
	}printf("%d\n", soma);
	
}
