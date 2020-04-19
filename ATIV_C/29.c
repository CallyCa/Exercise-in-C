#include <stdio.h>

void main(){
	
	float a,b,c,area,pe;
	scanf("%f %f %f", &a,&b,&c);
	if(a < b+c && b< a+c && c< b+a){
		pe = a+b+c;
		printf("Perimetro = %0.1f\n", pe);
	}else{
		area = ((a+b) *c) /2;
		printf("Area = %0.1f\n",area);
	}
	
	
}
