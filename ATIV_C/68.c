#include <stdio.h>

void main(){
	
	int lista[10],qntPar=0,i;
	for(i=0;i < 10;i++){
		scanf("%d", &lista[i]);
		if(lista[i] % 2 == 0){
			qntPar+=1;
		}
	}printf("Par = %d\n",qntPar);
	
}
