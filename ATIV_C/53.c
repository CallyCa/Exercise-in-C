#include <stdio.h>

void main(){
	
	int count=0,gas,qntA=0,qntG=0,qntD=0;
	
	scanf("%d",&gas);
	while(gas > 0){
		count+=1;
		scanf("%d",&gas);
		if(gas == 1){
			qntA+=1;
		}else if(gas == 2){
			qntG+=1;
		}else if(gas == 3){
			qntD+=1;
		}else if(gas == 4){
			break;
		}
	}printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",qntA);
	printf("Gasolina: %d\n",qntG);
	printf("Diesel: %d\n",qntD);
}
