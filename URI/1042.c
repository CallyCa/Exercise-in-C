#include <stdio.h>

int main(){
	
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if(a < b && a < c){
		printf("%d\n", a);
		printf("%d\n", b);
		printf("%d", c);
	}else if(a < c && c < b){
		printf("%d\n", a);
		printf("%d\n", c);
		printf("%d", b);
	}else if(b < a && a < c){
		printf("%d\n", b);
		printf("%d\n", a);
		printf("%d", c);
	}else if(b < c && c < a){
		printf("%d\n", b);
		printf("%d\n", c);
		printf("%d", a);
	}else if(c < a && a < b){
		printf("%d\n", c);
		printf("%d\n", a);
		printf("%d\n", b);
	}else{
		printf("%d\n", c);
		printf("%d\n", b);
		printf("%d\n", a);
		
	}	
		printf("\n%d\n", a);
		printf("%d\n", b);
		printf("%d", c);
	
	
	
	return 0;
}
