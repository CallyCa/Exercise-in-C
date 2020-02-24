#include <stdio.h>

int main(){
	
	int i= 0,qntPos = 0,qntNeg = 0;
	float num;
	
	while(i < 6){
		i+=1;
		scanf("%f", &num);
		if(num > 0){
			qntPos += 1;
		}else{
			qntNeg+= 1;
		}		
	}
	printf("%d valores positivos\n", qntPos);
	printf("%d valores negativos", qntNeg);
	
	return 0;
}
