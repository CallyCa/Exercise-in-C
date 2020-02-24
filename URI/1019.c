#include <stdio.h>

int main(){
	
	int hr,min,seg,temp;
	scanf("%d", &temp);
	
	hr = temp / 3600;
	min = (temp % 3600) / 60;
	seg = (temp % 3600) % 60;
	
	
	printf("%d:%d:%d", hr,min,seg);
	
	return 0;
}
