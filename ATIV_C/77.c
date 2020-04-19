#include <stdio.h>

void main(){
	int list[5],i,par=0;
	for(i=0; i < 5; i++){
		scanf("%d", &list[i]);
	}
	for(i=0;i < 5; i++){
		if(list[i] % 2 == 0){
			par = list[i];
			printf("Positivos: %d\n",par);
		}
		
	}
}
