#include <stdio.h>

void main(){
	
	int n1,n2,count = 0,dif;
	scanf("%d %d", &n1,&n2);
	if(n2 > n1){
		dif = n2 - n1;
		while(n1 < n2){
			n1+=1;
			printf("%d\n",n1);
		}printf("Soma da diferenca: %d\n", dif);
	}else if(n1 == n2){
		printf("N1 eh igual a N2.");
	}else{
		printf("N2 eh menor que n1.");
	}
}
