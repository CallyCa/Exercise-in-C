#include <stdio.h>

int main(){
	
	float a,b,c,media;
	printf("Informe a nota 1: ");
	scanf("%f", &a);
	printf("Informe a nota 2: ");
	scanf("%f", &b);
	printf("Informe a nota 3: ");
	scanf("%f", &c);
	media = ((a * 2) + (b * 3) + (c * 5)) / 10;
	printf("MEDIA: %0.1f", media);
	return 0;
}
