#include <stdio.h>
#include <math.h>

int main(){
	
	float x1,y1,x2,y2, dist,calc;
	scanf("%f %f", &x1,&y1);
	scanf("%f %f", &x2,&y2);
	dist = (pow(x2 - x1, 2) + pow(y2-y1,2));
	calc = sqrt(dist);
	printf("%0.4f", calc);
	
	return 0;
}
