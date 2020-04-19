#include <stdio.h>
#include <math.h>
void main(){
	
	float r,pi = 3.14159,vol;
	scanf("%f", &r);
	vol = (4.0/3) * pi * pow(r,3);
	printf("Volume = %0.3f\n", vol);
}
