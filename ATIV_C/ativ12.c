#include <stdio.h>

int main(){
	
	int a;
	scanf("%d", &a);
	if(a < 3 && a != 3){
		printf("%d", a);
	}else{
		printf("Informe um valor valido.");
	}
	
	return 0;
}
