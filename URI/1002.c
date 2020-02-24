#include <stdio.h>

int main(){
	
	float area,r, pi = 3.14159;
	printf("Informe o raio: ");
	scanf("%f", &r);
	area = pi * (r * 2);
	printf("A = %.4f", area);
	
	
	
	return 0;
}
