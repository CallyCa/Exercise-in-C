#include <stdio.h>

int main()
{
	
	float sal,reajuste,nsal;
	scanf("%f %f", &sal,&reajuste);
	nsal = (sal * reajuste) + sal;
	printf("Novo salario: R$ %0.2f", nsal);
	
	return 0;
}
