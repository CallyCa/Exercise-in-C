#include <stdio.h>

void main(){
	
	float sal, perc8=0.08,perc18=0.18,perc28=0.28,calc;
	scanf("%f", &sal);
	if(sal > 0.00 && sal <= 2000.00){
		printf("Isento\n");
	}else if(sal >= 2000.01 && sal <= 3000.00){
		calc = (sal - 2000) * perc8 ;
		printf("R$ %0.2f\n",calc);
	}else if(sal >= 3000.01 && sal <= 4500.00){
		calc = (sal - 3000) * perc18 + 80;
		printf("R$ %0.2f\n",calc);
	}else if(sal > 4500.00){
		calc = (sal - 4500) * perc28 + 350;
		printf("R$ %0.2f\n", calc);
	}
}
