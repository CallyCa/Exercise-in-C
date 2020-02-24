#include <stdio.h>

int main()
{
	
	float c,f,fah;
	printf("Informe a temperatura em Fahrenheit: ");
	scanf("%f", &f);
	c = (5 * (f - 32)) / 9;
	printf("A temperatura em Celsius eh = %0.2f ºC", c);

	return 0;
}
