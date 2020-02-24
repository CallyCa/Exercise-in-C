#include <stdio.h>

int main(){
	
	float cod,qnt,prec;
	scanf("%f %f", &cod,&qnt);
	if(cod == 1){
		prec = qnt * 4.00;
		printf("Total: R$ %0.2f", prec);
	}else if(cod == 2){
		prec = qnt * 4.50;
		printf("Total: R$ %0.2f", prec);
	}else if(cod == 3){
		prec = qnt * 5.00;
		printf("Total: R$ %0.2f", prec);		
	}else if(cod == 4){
		prec = qnt * 2.00;
		printf("Total: R$ %0.2f", prec);
	}else if(cod == 5){
		prec = qnt * 1.50;
		printf("Total: R$ %0.2f", prec);
	}
	
	return 0;
}
