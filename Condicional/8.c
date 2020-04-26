#include <stdio.h>

int main(){
	char nome[100];
	int sal;
	float calc,aum20=0.20,aum10=0.10,aum5=0.05;
	printf("Informe seu nome: ");
	gets(nome);
	printf("Informe seu salario: ");
	scanf("%d", &sal);
	
	if(sal >= 0 && sal < 1000){
		calc = (sal * aum20) + sal;
		printf("%s\n",nome);
		printf("Salario atual: %d\n",sal);
		printf("Aumento de 20%%.\n");
		printf("Salario: RS %0.2f\n",calc);
	}else if(sal > 1000 && sal < 1700){
		calc = (sal * aum10) + sal;
		printf("%s\n",nome);
		printf("Salario atual: %d\n",sal);
		printf("Aumento de 10%%.\n");
		printf("Salario: RS %0.2f\n",calc);
	}else if(sal > 1700 && sal <= 2500){
		calc = (sal * aum5) + sal;
		printf("%s\n",nome);
		printf("Salario atual: %d\n",sal);
		printf("Aumento de 5%%.\n");
		printf("Salario: RS %0.2f\n",calc);
	}else if(sal > 2500){
		printf("%s\n",nome);
		printf("Nao possui aumento.\n");
		printf("Salario: RS %d\n",sal);
	}else{
		printf("Valores incorretos.");
	}
	
	return 0;
}
