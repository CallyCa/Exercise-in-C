#include <stdio.h>

void main(){
	
	int qntIn,qntSup,i=0;
	float temp,media;
	while(i < 4){
		scanf("%f",&temp);
		i+=1;
		media = (media + temp) / 4;
		if(temp <= 10){
			qntIn+=1;
		}else if(temp > 30){
			qntSup+=1;
		}
	}printf("Media de temperatura: %0.2f C\n",media);
	printf("Quantidade menor que 10: %d C\n",qntIn);
	printf("Quantidade maior que 30: %d C\n",qntSup);

	
}
