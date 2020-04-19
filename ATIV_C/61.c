#include <stdio.h>

void main(){
	int n, fa=1,i;
	scanf("%d", &n);
	for(i=1; i <= n;i++){
		fa = fa * i;
	}
	printf("%d\n",fa);
	
}
