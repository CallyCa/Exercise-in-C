#include <stdio.h>

void main(){
	
	int num,i,mult;
	scanf("%d", &num);
	if(num >= 2 && num <= 1000){
		for(i=1;i <= 10;i++){
		mult = i*num;
		printf("%d x %d = %d\n", i,num,mult);
		}
	}
}
