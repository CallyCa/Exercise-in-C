#include <stdio.h>

void main(){
	
	float nota;
	float n100=0,n50=0,n20=0,n10=0,n5=0,n2=0;
	float n1=0,n050=0,n025=0,n010=0,n005=0,n001=0;
	scanf("%f", &nota);
	if(nota > 0 && nota < 1000000.00){
		while(nota - 100 >=0 ){
			n100+=1;
			nota = nota - 100;
		}while(nota - 50 >=0){
			n50+=1;
			nota = nota - 50;
		}while(nota - 20 >=0){
			n20+=1;
			nota = nota - 20;
		}while(nota - 10 >=0){
			n10+=1;
			nota = nota - 10;
		}while(nota - 5 >=0){
			n5 += 1;
			nota = nota - 5;
		}while (nota - 2 >=0){
			n5 +=1;
			nota = nota - 2;
		}while(nota - 1 >=0){
			n1 +=1;
			nota = nota - 1;
		}while(nota - 0.50 >= 0.0){
			n050+=1;
			nota = nota - 0.50;
		}while(nota - 0.25 >= 0.0){
			n025+=1;
			nota = nota - 0.25;
		}while(nota - 0.10 >=0.0){
			n010+=1;
			nota = nota - 0.10;
		}while(nota - 0.05 >= 0.0){
			n005+=1;
			nota = nota - 0.05;
		}while(nota - 0.01 >= 0.0){
			n001+=1;
			nota = nota - 0.01;
		}
		printf("NOTAS:\n");
		printf("%0.2f nota(s) de R$ 100.00\n",n100);
		printf("%0.2f nota(s) de R$ 50.00\n",n50);
		printf("%0.2f nota(s) de R$ 20.00\n",n20);
		printf("%0.2f nota(s) de R$ 10.00\n",n10);
		printf("%0.2f nota(s) de R$ 5.00\n",n5);
		printf("%0.2f nota(s) de R$ 2.00\n",n2);
		printf("MOEDAS:\n");
		printf("%0.2f moeda(s) de R$ 1.00\n",n1);
		printf("%0.2f moeda(s) de R$ 0.50\n",n050);
		printf("%0.2f moeda(s) de R$ 0.25\n",n025);
		printf("%0.2f moeda(s) de R$ 0.10\n",n010);
		printf("%0.2f moeda(s) de R$ 0.05\n",n005);
		printf("%0.2f moeda(s) de R$ 0.01\n",n001);
	}
}
