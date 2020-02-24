#include <stdio.h>

int main(){
	
	float temp, velm,dist;
	scanf("%f", &temp);
	scanf("%f", &velm);
	dist = (temp * velm) / 12;
	printf("%0.3f km/l", dist);
	
	return 0;
}
