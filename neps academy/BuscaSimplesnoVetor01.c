#include <stdio.h>
#include <stdlib.h>

int main(){  
	int v[10];	
    	int x,cont=0,i;
	
	for(i=0;i<10;i++){
		scanf("%i",&v[i]);
	}
	scanf("%i",&x);
	for(i=0;i<10;i++){
		if(v[i]==x){
			cont=1;
			break;
		}
	}
	if(cont){
		printf("SIM\n");
	}else{
		printf("NAO\n");
	}
	
    	return 0;
}
