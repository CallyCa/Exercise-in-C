#include <stdio.h>

int main(){
	
	int a,b,c;
	printf("Informe tres numeros: ");
	scanf("%d %d %d", &a,&b,&c);
	if(a > b && a > c){
		printf("%d %d %d\n",a,b,c);
	}else if(a > c && a > b){
			printf("%d %d %d\n",a,c,b);
	}else if(b > a && b > c){
			printf("%d %d %d\n",b,a,c);
	}else if(b > c && b > a){
			printf("%d %d %d\n",b,c,a);
	}else if(c > a && c > b){
			printf("%d %d %d\n",c,a,b);
	}else{
			printf("%d %d %d\n",c,b,a);
	}
	return 0;

}
