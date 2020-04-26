#include <stdio.h>

void parametros(int a,int b,int c){
	int i,soma;
	printf("Informe a > 1 e c >= b: ");
	scanf("%d %d %d", &a,&b,&c);
	if(a > 1 && c >= b){
		for(i = b;i <= c; i++){
			if(i % a == 0){
				soma+=i;
				printf("Numeros entre b e c: %d\n",i);
			}
		}printf("Soma dos numeros entre b e c: %d\n",soma);
	}
}

int main(){
	int x,y,z;
	parametros(x,y,z);
	return 0;
	
}
