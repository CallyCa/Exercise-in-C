#include <stdio.h>

void main(){
	
	float n1,n2,media,count=0;
	int resp;
	while(1){
		
		do{
			scanf("%f", &n1);
			if(n1 < 0 || n1 > 10) printf("nota invalida\n");
		}while(n1 < 0 || n1 > 10);
		
		do{
			scanf("%f",&n2);
			if(n2 < 0 || n2 > 10) printf("nota invalida\n");
		}while(n2 < 0 || n2 > 10);
		
		media = (n1 + n2) / 2;
		printf("media = %0.2f\n",media);
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &resp);
		while(resp < 1 || resp > 2){
			count+=1;
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &resp);
		}if(resp == 2){
			break;
		}
			
	}
}

