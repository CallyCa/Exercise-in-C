#include <stdio.h>

void main(){
	
	int num,count = 0;
	scanf("%d", &num);
	if(num > 0){
		while(count < num){
			count +=1;	
			printf("%d\n",count);	
		}		
	}else{
		printf("Numero eh negativo.\n");
	}
	
	
}
