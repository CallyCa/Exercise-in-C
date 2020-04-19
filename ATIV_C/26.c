#include <stdio.h>

void main(){
	
	int valor,hr,min,seg;
	scanf("%d", &valor);
	hr = (valor / 3600) % 60;
	min = (valor / 60) % 60;
	seg = (valor % 60);
	printf("%d:%d:%d\n",hr,min,seg);
	
}
