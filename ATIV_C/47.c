#include <stdio.h>

void main(){
	
	float x,y,calc,count=0;
	int num, i,n;
	scanf("%d",&num);
	
	while(count < num){
		count+=1;
		scanf("%f %f", &x,&y);
		
		if(x > 0 && y > 0){
			calc = x / y;
			printf("%0.1f\n", calc);
		}else if(x < 0 && y > 0){
			calc = x / y;
			printf("%0.1f\n",calc);
		}else if(x < 0 && y < 0){
			calc = x / y;
			printf("%0.1f\n", calc);
		}else if(x > 0 && y < 0){
			calc = x / y;
			printf("%0.1f\n",calc);
		}else if(y == 0){
			printf("divisao impossivel\n");
		}else if(x == 0){
			calc = x / y;
			printf("%0.1f\n",calc);
		}
	} 
	
	
}
