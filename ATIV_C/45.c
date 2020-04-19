#include <stdio.h>

void main(){
	
	int passw,i;
	while(1){
		i+=1;
		scanf("%d",&passw);
		if(passw != 2002){
			printf("Senha Invalida\n");
		}else{
			printf("Acesso Permitido\n");
			break;
		}
	}	
	
}
