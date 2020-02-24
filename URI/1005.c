#include <stdio.h>

int main(){
	float a,b,media;
	printf("Informe a nota 1: ");
	scanf("%f", &a);
	printf("Informe a nota 2: ");
	scanf("%f", &b);
	media = ((a * 3.5) + (b * 7.5)) / 11;
	printf("MEDIA: %.5f", media);
	
	return 0;
}
