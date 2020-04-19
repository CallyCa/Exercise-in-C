#include <stdio.h>

void main(){
	int num,count,qntPos=0,qntNeg=0,qntPar=0,qntImpar=0;
	while(count < 5){
		count+=1;
		scanf("%d", &num);
		if(num % 2==0 || num == 0){
			qntPar+=1;
		}else if(num > 0){
			qntPos +=1;
		}else if(num < 0){
			qntNeg +=1;
		}else if(num % 2!=0){
			qntImpar +=1;
		}
	}
	printf("%d valor(es) par(es)\n", qntPar);
	printf("%d valor(es) impar(es)\n", qntImpar);
	printf("%d valor(es) positivo(s)\n", qntPos);
	printf("%d valor(es) negativo(s)\n", qntNeg);

		
	
}
