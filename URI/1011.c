#include <stdio.h>
#include <math.h>

int main(){
	
	float r, area, pi = 3.14159;
	scanf("%f", &r);
	area = ((4.0/3) * pi * (pow(r,3)));
	printf("VOLUME = %0.3f", area);

	return 0;
}
