#include <stdio.h>
#include <math.h>
int main(){
	
	float A,B,C;
	scanf("%f %f %f", &A,&B,&C);
	if(((abs(B - C) < A) && (A < B + C)) && ((abs(A - C) < B) && (B < A + C)) && ((abs(A - B) < C) && (C < A + B))) {
		printf("Perimetro: %0.1f", (A + B + C));
	}else{
		printf("Area = %0.1f",(((A + B) * C)/2));
	}
	
	return 0;
}
