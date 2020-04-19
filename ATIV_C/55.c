#include <stdio.h>

void main(){
	
	int i=1,x,y,z=1,n;
	
	scanf("%d", &n);
	if(n > 0){
		while(i <= n){
			x=1 + z;
			y+=2 + z;
			printf("%d %d %d PUM\n", z,x,y);
			z+=4;
			i++;
		}
	}
	
}
