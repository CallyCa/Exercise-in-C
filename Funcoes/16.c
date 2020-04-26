#include <stdio.h>

void graus(int num){
	int i,fah;
	printf("Informe um numero: ");
	scanf("%d", &num);
	if(num >= 0){
		for(i=0;i < num;i++){
			fah = (i + 32);
			printf("Fahrenheit contador: %d\n",fah);
		}
	}
}

int main(){
	int cel;
	graus(cel);
	return 0;
	
}
