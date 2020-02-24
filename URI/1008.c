#include <stdio.h>

int main(){
	int hr,rechr;
	float sal,calc;
	printf("Horas trabalhadas: ");
	scanf("%d", &hr);
	printf("Recebe por hora: ");
	scanf("%d", &rechr);
	printf("Informe seu salario: ");
	scanf("%f", &sal);
	calc = (rechr * sal);
	printf("NUMBER = %d\n",hr);
	printf("SALARY = U$ %0.2f", calc);

	return 0;
}
