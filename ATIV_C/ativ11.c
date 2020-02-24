#include <stdio.h>

int main(){
	
	int a,pos;
	scanf("%d", &a);
	if(a < 0){
		pos = a * -1;
		printf("%d", pos);
	}else{
		printf("%d",a);
	}
	
	
}
