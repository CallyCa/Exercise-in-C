#include <stdio.h>

int main()
{
	float n1,n2,calc;
	int peso1 = 2, peso2 = 3;
	printf("Informe suas notas:\n");
	scanf("%f %f", &n1, &n2);
	calc = ((n1 * peso1) + (n2 * peso2)) / 5;
	printf("Media ponderada eh = %0.1f", calc);
	
	return 0;
}
