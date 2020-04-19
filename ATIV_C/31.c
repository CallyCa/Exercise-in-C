#include <stdio.h>
#include <math.h>
void main(){
	
	float a,b,c;
	scanf("%f %f %f", &a,&b,&c);
	if(a >= b+c){
		printf("NAO FORMA TRIANGULO\n");
	}else if(pow(a,2) == pow(b,2) + pow(c,2)){
		printf("TRIANGULO RETANGULO\n");
	}else if(pow(a,2) > pow(b,2) + pow(c,2)){
		printf("TRIANGULO OBTUSANGULO\n");
	}else if(pow(a,2) < pow(b,2) + pow(c,2)){
		printf("TRIANGULO ACUTANGULO\n");
	}else if(a == b && a == c && b == c){
		printf("TRIANGULO EQUILATERO\n");
	}else if(a == b && b == c && a != c || a != b && a == c && a == b || a == b && b != c && a == c){
		printf("TRIANGULO ISOSCELES\n");
	}
	
	
}
