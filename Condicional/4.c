#include <stdio.h>

int main(){
	int a,b,c,d;
	printf("Informe quatro numeros: ");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	if(a % 2 == 0 && a % 3 == 0 || b % 2 == 0 && b % 3 == 0 || c % 2 == 0 && c % 3 == 0 || d % 2 == 0 && d % 3 == 0){
		printf("Numero(s) divisiveis por 2 ou 3\n");
	}else{
		printf("Nenhum numero eh divisivel\n");
	}
	return 0;
}
