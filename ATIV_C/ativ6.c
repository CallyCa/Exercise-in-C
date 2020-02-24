#include <stdio.h>

int main(){
	
	float a,b,c;
	float d,r,s,exp;
	scanf("%f %f %f", &a,&b,&c);
	d = (r+s) / 2;
	r = (a + b) * (a + b);
	s = (b + c) * (b + c);
	exp = d + r + s;
	
	printf("Expressao: %0.2f", exp);
	
	
	return 0;
}
