#include<stdio.h>
#include<math.h>

void fiboeasy(int n){
	int vet[n],i;
    vet[0]=0;
    vet[1]=1;
    for(i=2;i<n;i++){
        vet[i]=vet[i-1]+vet[i-2];
        
    }
    
    for(i=0;i<n;i++){
    	if((n-i)==1){
        	printf("%d",vet[i]);
        } else{
            printf("%d ",vet[i]);
        }
    }
}

int main(){
	int a;
	printf("Informe um numero: ");
    scanf("%d",&a);
    fiboeasy(a);
    return 0;
}
