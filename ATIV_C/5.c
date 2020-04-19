#include <stdio.h>
#include <math.h>
void main(){
	
	float a,b,c,pi = 3.14159;
	float trian,circ,trap,quad,ret;
	scanf("%f %f %f", &a,&b,&c);
	trian = (a * c) / 2;
	circ = pi * pow(c,2);
	trap = ((a + b ) * c) / 2;
	quad = pow(b,2);
	ret = (a * b); 
	
	printf("TRIANGULO: %0.3f\n",trian);
	printf("CIRCULO: %0.3f\n",circ);
	printf("TRAPEZIO: %0.3f\n",trap);
	printf("QUADRADO: %0.3f\n",quad);	
	printf("RETANGULO: %0.3f\n",ret);	
	
	
	
}
