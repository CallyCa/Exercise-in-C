#include <stdio.h>

void main(){
	
	int n;
	int l,x,y,i;
	
	while(1){
	
		i+=1;
		scanf("%d %d", &x,&y);
		if(x > y){
			for(l = y + 1; l <= x; l++){
				if(l = x){
					printf("Decrescente\n");
				}
			}
		}else if(x < y){
			for(l = x + 1; l <= y;l++){
				if(l = y){
					printf("Crescente\n");
				}
			}
		}else{
			if(x = y){
				break;
			}
		}
	}
	
}
