#include <stdio.h>
#include <math.h>

void main(){
	
	int n,i=1,j,k=1,count=0,count2;
	scanf("%d", &n);
	if(n > 1 && n < 1000){
		while(count < n){
			i= pow(k,2);
			j= pow(k,3);
			printf("%d %d %d\n", k,i,j);
			count+=1;
			k+=1;		
		}
	}
	
	
}
