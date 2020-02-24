#include <stdio.h>

int main(){
	
	int dist;
	float combs,calc;
	scanf("%d", &dist);
	scanf("%f", &combs);
	calc = dist / combs;
	printf("%0.3f km/l",calc);
	
	
	return 0;
}
