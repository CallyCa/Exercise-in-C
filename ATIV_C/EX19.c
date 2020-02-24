#include <stdio.h>

int main(){
	
	int a,b,c;
	printf("Informe os 3 numeros:\n ");
	scanf("%i %i %i", &a,&b,&c);
	
	if((a <= b) && (a <= c))
		printf("%i", a);
	else if((b <= a) && (b <= c))
		printf("%i", b);
	else if((c <= a) && (c <= b))
		printf("%i", c);
	else
		printf("Valores sao iguais.");
	
	return 0;
}
