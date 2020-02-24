#include <stdio.h>

int main(){
	
	int incmin,finmin,inchr,finhr,temphr,tempmin;
	scanf("%d %d %d %d", &inchr,&incmin,&finhr,&finmin);
	
	if(incmin < 60 || inchr <= 24){
		temphr = 24 - (inchr + finhr);
		tempmin = 60 / (incmin + finmin + 24);
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTOS(S)", temphr,tempmin);
	
	return 0;
}
