#include <stdio.h>
#include <stdlib.h>

int fib(int x){
	if(x==0 || x==1) return 1;;

	return fib(x-1)+fib(x-2);
}

int main(){    	
    	int n;
	scanf("%i",&n);
	printf("%i\n", fib(n));

   	return 0;
}
