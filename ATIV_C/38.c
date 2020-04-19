#include <stdio.h>

void main(){
	
	char Tipo;
	int Quantia,i,qntC=0,qntR=0,qntS=0,total,num;
	float percC,percR,percS;
	scanf("%d", &num);
	if(num >= 1 && num <= 15){
		for(i=0;i < num;i++){
			scanf("%d %c",&Quantia,&Tipo);
			total= total + Quantia;
			if(Tipo == 'C'){
				qntC= qntC + Quantia;
			}else if(Tipo == 'R'){
				qntR=qntR + Quantia;
			}else if(Tipo == 'S'){
				qntS=qntS + Quantia;
			}
		}	
	}
		
	percC = (qntC * 100.00) / total;
	percS = (qntS * 100.00) / total;
	percR = (qntR * 100.00) / total;
	
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",qntC);
	printf("Total de ratos: %d\n",qntR);
	printf("Total de sapos: %d\n",qntS);
	printf("Percentual de coelhos: %0.2f %%\n", percC);
	printf("Percentual de ratos: %0.2f %%\n", percR);
	printf("Percentual de sapos: %0.2f %%\n", percS);
	
}
