#include <stdio.h>
#include <math.h>
void main(){
	
	float x1,x2,y1,y2,dist,calc;
	scanf("%f %f", &x1,&y1);
	scanf("%f %f", &x2,&y2);
	dist = (pow(x2-x1, 2) + pow(y2-y1, 2));
	calc = sqrt(dist);
	printf("Distancia entre dois pontos: %0.2f\n", calc);
	
	
}
