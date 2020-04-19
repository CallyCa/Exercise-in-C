#include <stdio.h>

void main(){
	
	int n,count=1,j=1,z,k;
	scanf("%d", &n);
	
	if(n > 0){
		while(count <= n){
			j= k + 1;
			z = k + 2;
			printf("%d %d %d PUM\n", k,j,z);
			count+=1;
			k+=4;
		}
	}
	
	
}
