#include <stdio.h>

float media (float a, float b,float c){
	float media;
	media = (a+b+c)/3;
	return media;
}


int main(){
	float n1,n2,n3,result;
	printf("Infome as tres notas: ");
	scanf("%f %f %f", &n1,&n2,&n3);
	result = media(n1,n2,n3);
	printf("Media = %0.2f", result);
	
	return 0;
}



