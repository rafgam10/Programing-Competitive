#include <stdio.h>
#include <stdlib.h>

void dados(){
	double A, B, SUM=0;
	scanf("%lf",&A);
	scanf("%lf",&B);
    SUM=(float)(A+B)/2;
    if(SUM>=7 && SUM<=10){
        printf("Aprovado\n");
    }else if(SUM<7 && SUM>=4){
        printf("Recuperacao\n");
    }else{
        printf("Reprovado\n");
    }
}

int main(){
    dados();
}