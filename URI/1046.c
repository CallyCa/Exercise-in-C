#include <stdio.h>


int main(){
	int hrin,hrfin,calc;
	scanf("%d %d", &hrin,&hrfin);
	
	if(hrin <= 24){
		calc = 24 - hrin + hrfin;
	}	
	printf("O JOGO DUROU %d HORAS(S)", calc);
	
	return 0;
}
