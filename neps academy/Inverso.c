#include <stdio.h>
#include <stdlib.h>

int main(){    	
	int a[10],b[10],i,j;
	for(i=0;i<10;i++){
		scanf("%i",&a[i]);
	}
	for(i=0,j=9;i<10;i++,j--){
		b[j]=a[i];
	}
	for(int i=0;i<10;i++){
		printf("%i\n",b[i]);
	}
	return 0;
}
