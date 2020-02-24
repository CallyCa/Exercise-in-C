#include <stdio.h>

int main(){
	
	int hr;
	float total;
	scanf("%d", &hr);
	total = (hr / 3) * 8.50;
	total += (hr %3) * 3.50; 
	printf("PAGAR: R$ %0.2f", total);
	
	return 0;
}
