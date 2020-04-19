#include <stdio.h>

void main(){
	int x=0,y,i,soma=0;
	
	scanf("%d",&x);
	scanf("%d",&y);
	for(i=x;i <= y;i++){
		if(i % 13 != 0){
			soma+=i;
			printf("%d\n",soma);
		}
	} 
	
}
