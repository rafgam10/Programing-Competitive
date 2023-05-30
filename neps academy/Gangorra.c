#include <stdio.h>
#include <stdlib.h>

void dados(){
	int P1, C1, P2, C2,sum1,sum2;
	scanf("%d %d %d %d",&P1, &C1, &P2, &C2);
    sum1=P1*C1;
    sum2=P2*C2;
    if(sum1 == sum2){
        printf("%i\n",0);
    }else if(sum1>sum2){
        printf("%i\n",-1);
    }else if(sum1<sum2){
        printf("%i\n",1);
    }
}

int main(int argc, char const *argv[]){
    dados();
}
