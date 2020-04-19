#include <stdio.h>
void main(){
	
	int n,i,j,count=0;
	while(1){
		scanf("%d",&n);
		count+=1;
		if(n == 0){
			break;
		}else{
			for(i=1;i < n;i++){
				printf("%d ",i);
			}printf("%d\n",i);
		}
	}
	
}

