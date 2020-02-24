#include <stdio.h>

int main(){
	
	int cem, cinq,vint,dez,cinc,dois,um,num;
	scanf("%d", &num);
	if(0 < num < 1000000){
		if(num >= 100){
			cem = num / 100;
		}if(num >= 50){
			cinq = num % 100 / 50;
		}if(num >= 20){
			vint = num % 50 / 20;
		}if(num >= 10){
			dez = num % 20 / 10 % 1;
		}if(num >= 5){
			cinc = num % 10 / 5;
		}if(num >= 2){
			dois = num % 5 / 2;
		}if(num = 1){
			um = num % 1 == 0;
		}
		printf("%d nota(s) de R$ 100,00\n", cem);
		printf("%d nota(s) de R$ 50,00\n", cinq);
		printf("%d nota(s) de R$ 20,00\n", vint);
		printf("%d nota(s) de R$ 10,00\n", dez);
		printf("%d nota(s) de R$ 5,00\n", cinc);
		printf("%d nota(s) de R$ 2,00\n", dois);
		printf("%d nota(s) de R$ 1,00", um);

		
	}
	
	
	return 0;
}
