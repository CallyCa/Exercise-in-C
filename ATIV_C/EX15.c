#include <stdio.h>

int main()
{
	
	int num;
	printf("Infome um numero: ");
	scanf("%i", &num);
	
	switch(num){
		case 1:
			printf("Esse numero eh legal.");
			break;
		case 2:
			printf("Esse numero nao eh legal.");
			break;
		case 3:
			printf("Cara... PARA!");
			break;
		default:
			printf("Isso nem eh numero bom.");
			break;
		case 50:
			printf("Olha so! Voce descobriu o meu numero. Parabens!");
			break;
	}
	

	return 0;
}
