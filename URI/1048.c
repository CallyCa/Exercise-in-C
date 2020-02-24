#include <stdio.h>

int main(){
	
	float sal,perc,reaj;
	scanf("%f", &sal);
	if(sal > 0 && sal <= 400.00){
		perc = (0.15 * sal) + sal;
		reaj = (0.15 * sal);
		printf("Novo salario: %0.2f\n", perc);
		printf("Reajuste ganho: %0.2f\n", reaj);
		printf("Em percentual: 15 %%");
		
	}else if(sal >= 400.01 && sal < 800.00){
		perc = (0.12 * sal) + sal;
		reaj = (0.12 * sal);
		printf("Novo salario: %0.2f\n", perc);
		printf("Reajuste ganho: %0.2f\n", reaj);
		printf("Em percentual: 12 %%");
	}else if(sal >= 800.01 && sal <= 1200.00){
		perc += (0.10 * sal) + sal;
		reaj = (0.10 * sal);
		printf("Novo salario: %0.2f\n", perc);
		printf("Reajuste ganho: %0.2f\n", reaj);
		printf("Em percentual: 10 %%");
	}else if(sal >= 1200.01 && sal <= 2000.00){
		perc = (0.07 * sal) + sal;
		reaj = (0.07 * sal);
		printf("Novo salario: %0.2f\n", perc);
		printf("Reajuste ganho: %0.2f\n", reaj);
		printf("Em percentual: 7 %%");
	}else if(sal > 2000.00){
		perc = (0.04 * sal)+ sal;
		reaj = (0.04 * sal);
		printf("Novo salario: %0.2f", perc);
		printf("Reajuste ganho: %0.2f", reaj);
		printf("Em percentual: 4 %%");
	}
	
	return 0;
}
