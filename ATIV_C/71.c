#include <stdio.h>

void main(){
	
	int cod[5],i,qnt;
	float valor[5],total,qntP=0;
	
	for(i=0;i < 5;i++){
		scanf("%d %f", &cod[i], &valor[i]);
		if(cod[i] == 1){
			scanf("%d", &qnt);
			total = qnt * valor[i];
			printf("RS %0.1f\n",total);
		}else if(cod[i] == 2){
			scanf("%d", &qnt);
			total = qnt * valor[i];
			printf("RS %0.1f\n",total);
		}else if(cod[i] == 3){
			scanf("%d", &qnt);
			total = qnt * valor[i];
			printf("RS %0.1f\n",total);
		}else if(cod[i] == 4){
			scanf("%d", &qnt);
			total = qnt * valor[i];
			printf("RS %0.1f\n",total);
		}else if(cod[i] == 5){
			scanf("%d", &qnt);
			total = qnt * valor[i];
			printf("RS %0.1f\n",total);
		}
	}

}
