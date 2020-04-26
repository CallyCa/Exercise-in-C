#include <stdio.h>

void maiorNum(int num){
	int maior=0,i,nuns[i];
	printf("Informe um contador: ");
	scanf("%d", &num);
	for(i=0; i < num;i++){
		printf("Informe um numero: ");
		scanf("%d", &nuns[i]);
		if(nuns[i] >= maior){
			maior = nuns[i];
		}
	}printf("Maior numero: %d\n",maior);
}

int main(){
	
	int mair;
	maiorNum(mair);
	return 0;
}
