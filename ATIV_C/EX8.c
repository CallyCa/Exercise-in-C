#include <stdio.h>

int main()
{
	float circ, r, pi = 3.14;
	printf("Digite o raio da circunferencia: ");
	scanf("%f", &r);
	circ = 2 * pi * r;
	printf("Raio da circunferencia eh = %0.2f", circ);
	
	return 0;
	
}
