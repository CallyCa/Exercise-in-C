#include <stdio.h>

int main()
{
	float pe,area,h,b;
	printf("Informe a base e altura do retangulo: ");
	scanf("%f %f", &b,&h);
	pe = 2 * (b*h);
	area = b * h;
	
	printf("Perimetro do retangulo: %0.2f", pe);
	printf("\nArea do retangulo: %0.2f", area);
	
	return 0;
}
