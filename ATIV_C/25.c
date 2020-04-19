#include <stdio.h>

void main(){
	
	int n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0,nota;
	scanf("%d", &nota);
	if(nota > 0 && nota < 1000000){
		while(nota - 100 >= 0){
			n100+=1;
			nota = nota - 100;
		}while(nota - 50 >= 0){
			n50+=1;
			nota = nota - 50;
		}while(nota - 20 >= 0){
			n20+=1;
			nota = nota - 20;
		}while(nota - 10 >= 0){
			n10+=1;
			nota = nota - 10;
		}while(nota - 5 >= 0){
			n5+=1;
			nota = nota - 5;
		}while(nota - 2 >= 0){
			n2+=1;
			nota = nota - 2;
		}while(nota - 1 >= 0){
			n1+=1;
			nota = nota - 1;
		}
		printf("%d nota(s) de R$ 100,00\n",n100);
		printf("%d nota(s) de R$ 50,00\n",n50);
		printf("%d nota(s) de R$ 20,00\n",n20);
		printf("%d nota(s) de R$ 10,00\n",n10);
		printf("%d nota(s) de R$ 5,00\n",n5);
		printf("%d nota(s) de R$ 2,00\n",n2);
		printf("%d nota(s) de R$ 1,00\n",n1);
	}
}
