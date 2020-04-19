#include <stdio.h>

void main(){
	
	float n1,n2,n3,n4,media,nvmedia,n5;
	scanf("%f %f %f %f", &n1,&n2,&n3,&n4);
	media = (n1+n2+n3+n4) / 4;
	if(media >= 7.0){
		printf("Aprovado = media %0.1f\n", media);
	}else if(media >=5.0){
		scanf("%f", &n5);
		nvmedia = (media + n5) / 2;
		printf("Aprovado em exame = %0.1f\n", nvmedia);
	}else{
		printf("Reprovado = media %0.1f\n",media);
	}
}
