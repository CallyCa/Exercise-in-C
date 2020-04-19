#include <stdio.h>
#include <math.h>
void main(){
	int n,i=1,k=1,j,count=0;
	scanf("%d", &n);
	if(n > 1 && n < 1000){
		while(count < n){
			i= pow(k,2)+1;
			j = pow(k,2)*k ;
			j++;
			printf("%d %d %d\n", k,i,j);
			count+=1;
			k+=1;
		}
	}
}
