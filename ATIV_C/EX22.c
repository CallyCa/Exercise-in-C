#include <stdio.h>


int main(void){
	float mediaAluno(float notas);
	mediaAluno();
	
	
	return 0;
}

float mediaAluno(float notas){
	
	int count = 1;
	while (count <= 4){
		count += 1;
		printf("Digite a nota %i", notas);
		scanf("%f", &notas);
		int media += notas / 4;
	}
	
	
	return;
}
