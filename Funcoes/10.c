#include <stdio.h>

void aritmetica(int num){
	float media;
	int i,nuns,soma,cont=0;
	printf("Informe um contador: ");
	scanf("%d", &num);
	if(num > 0){
		for(i =0;i < num;i++){
			printf("Informe um numero: ");
			scanf("%d", &nuns);
			soma+=nuns;
			cont+=1;
		}
		media = soma / cont;
		printf("Media aritmetica: %0.2f\n", media);
	}
}

int main(){
	int numm;
	aritmetica(numm);
	return 0;
	
}
