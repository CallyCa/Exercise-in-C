#include <stdio.h>
#include <math.h>
void main(){
	
	float exp,r,s;
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
 	r = pow(a+b,2);
	s = pow(b+c,2);
	exp = (r + s) / 2;
	printf("Expressao = %0.2f\n",exp);
}
