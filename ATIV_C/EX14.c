#include <stdio.h>

int main()
{
	
	int idade,opc,opc2,opc3;
	char name;
	printf("Infome sua idade: ");
	scanf("%i", &idade);
	
	if(idade > 18){
		printf("Escolha sua opcao: 1 - Entrar no game / 2 - Sair do game: ");
		scanf("%i", &opc);
		printf("\n----Game comecando----\n");
		printf("\nWhat's your name?\n");
		scanf("%s", &name);
		printf("Seu nome eh %c", name);
		while(idade > 100 ){
			printf("\nEssa idade esta errada . Digite 2 para sair do game:\n");		
			scanf("%i",&opc);
		}

	}else{
		if(opc == 2){
			printf("\nVoce escolheu sair deste game!\n");
			printf("Seu Loser!");	
		}
		
	}
	getch();
	return 0;
}
