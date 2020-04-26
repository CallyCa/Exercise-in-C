#include <stdio.h>

int main(){
	
	float n1,n2,media,af,mf;
	
	printf("Informe a nota 1: ");
	scanf("%f", &n1);
	printf("Informe a nota 2: ");
	scanf("%f", &n2);
	media = (n1 * 1 + n2 * 2) / 2;
	
	if(media >= 7){
		printf("Aprovado\nMedia = %0.2f\n",media);
	}
	else if(media >= 4 && media < 7){
		printf("Fazer a Prova final.\n\n");
		printf("Informe a nota final: ");
		scanf("%f", &af);
		mf = (media + af) / 2;
		if(mf >= 5){
			printf("Aprovado\nMedia final: %0.2f\n",mf);
		}else if(mf < 5){
			printf("Reprovado\nMedia final: %0.2f\n",mf);
		}
	}else if(media < 4){
		printf("Reprovado\nMedia: %0.2f\n",media);
	}
	return 0;
	
}
