#include <stdio.h>

int main(){
	int a,b,c;
	printf("Informe tres numeros: ");
	scanf("%d %d %d", &a,&b,&c);
	if(a > b && a > c){
		printf("Maior eh %d e o menor eh %d\n",a,c);
	}else if(a > c && a > b){
		printf("Maior eh %d e o menor eh %d\n",a,b);
	}else if(b > a && b > c){
		printf("Maior eh %d e o menor eh %d\n",b,c);
	}else if(b > c && b > a){
		printf("Maior eh %d e o menor eh %d\n",b,a);
	}else if(c > a && c > b){
		printf("Maior eh %d e o menor eh %d\n",c,b);
	}else{
		printf("Maior eh %d e o menor eh %d\n",c,a);
	}
	return 0;
}
