#include <stdio.h>


int main(){
	
	int seg,hr,min;
	scanf("%d", &seg);
	
	min = (seg / 60); << 2 min
	hr = min / 60; << 0.0
	min = min % 60; << 0.0
	seg = seg % 60; << 0.0
	printf("%d hr :%d min :%d seg", hr,min,seg);

	
}
