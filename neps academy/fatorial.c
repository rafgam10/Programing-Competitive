#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n,fatorial,i;
	scanf("%i",&n);
	fatorial=n;
	if(fatorial==0||fatorial==1){
		fatorial=1;
	}else if(fatorial!=0||fatorial!=1){
		for(i=n-1;i>=1;i--){
			fatorial*=i;
		}
	}
	printf("%i\n",fatorial);
	return 0;
} 
