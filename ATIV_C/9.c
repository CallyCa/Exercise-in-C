#include <stdio.h>

void main(){
	
	float fah,cel;
	scanf("%f", &fah);
	cel = (5.0/9) * (fah - 32);
	printf("%0.1f C\n", cel);
}
