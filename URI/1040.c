#include <stdio.h>


int main(){
	
	float n1,n2,n3,n4,media,nvnota,nvmedia;
	scanf("%f %f %f %f", &n1,&n2,&n3,&n4);
	media = (n1*2 + n2*3 + n3*4+ n4*1) / 10; 
	
	if(media >= 7){
		printf("Media: %0.1f\n", media);
		printf("Aluno aprovado.\n");
		
	}else if(media < 5){
		printf("Aluno reprovado.\n");
		
	}else{
		printf("Aluno em exame.\n");
		scanf("%f", &nvnota);
		printf("Nota do exame: %0.1f\n",nvnota);
		nvmedia = (media + nvnota) / 2;
		printf("Aluno aprovado.\n");
		printf("Media final: %0.1f", nvmedia);	
}
	return 0;
}
