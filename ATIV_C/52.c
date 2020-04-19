#include <stdio.h>

void main(){
	
	int x=0,y=0,i=0,aux;
	
	scanf("%d", &x);
	scanf("%d", &y);
	if(x > 0 && y > 0){
		if(x < y){
			for(i=x+1; i < y;i++){
				if(i % 5 == 2 || i % 5 == 3){
					printf("%d\n",i);
				}
			}
		}
		else{
			for (i=y+1;i < x;i++){
				if(i % 5 == 2 || i % 5 == 3){
				printf("%d\n",i);
				}
			}
		}
	}
}
