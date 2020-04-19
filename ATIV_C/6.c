#include <stdio.h>

void main(){
	
	float dist,lit;
	int met;
	scanf("%i", &met);
	scanf("%f",&lit);
	dist = (met / lit);
	printf("%0.3f km/l\n",dist);
}
