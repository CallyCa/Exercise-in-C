#include <stdio.h>

void main(){
	
	int qnt;
	float val,desc10=0.10,desc20=0.20,desc50=0.50,total,desc;
	scanf("%d %f", &qnt, &val);
	if(qnt <= 10){
		total = val * qnt;
		printf("Total = R$ %0.2f\n",total);
	}else if(qnt >=11 && qnt <=20){
		desc = (qnt * val * desc10);
		total = (qnt * val) - desc;
		printf("Desconto de 10%% = %0.2f\n",desc);
		printf("Total = R$ %0.2f\n",total);
	}else if(qnt >= 21 && qnt <= 50){
		desc = (qnt * val * desc20);
		total = (qnt * val) - desc;
		printf("Desconto de 20%% = %0.2f\n",desc);
		printf("Total = R$ %0.2f\n",total);
		
	}else if(qnt > 50){
		desc = (qnt * val * desc50);
		total = (qnt * val) - desc;
		printf("Desconto de 50%% = %0.2f\n",desc);
		printf("Total = R$ %0.2f\n",total);
	}
}
