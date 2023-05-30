#include <stdio.h>
#include <stdlib.h>

void dados(){
    
	int A, M, SUM;
	scanf("%d",&A);
	scanf("%d",&M);
    SUM=A+M;
    if(SUM<=50 && SUM>=1){
        printf("S\n");
    }else{
        printf("N\n");
    }
}

int main(){
    dados();
}