#include <stdio.h>

//EX: 03
typedef struct limite{
	
	int x;
	int lim_inf;
	int lim_sup;
	
}limite;

limite parametro(){
	limite li;
	return li;
}

void recebe(limite li){
	int i;
	
	printf("Informe tres numeros: ");
	scanf("%d %d %d", &li.x,&li.lim_inf,&li.lim_sup);
	if(li.lim_inf <= li.lim_sup){
		if(li.x >= li.lim_inf && li.x <= li.lim_sup){
			printf("encontra-se no intervalo.");
		}else{
			printf("Fora do intervalo.");
		}
	}
}

int main(){
	limite numero;
	numero = parametro();
	recebe(numero);
	
	return 0;
}
