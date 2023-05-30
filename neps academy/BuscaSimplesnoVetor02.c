#include <stdio.h>
#include <stdlib.h>

int main(){    	
	int v[10],cont=0,x,i;
	for(i=0;i<10;i++){
		scanf("%i ",&v[i]);
	}	
	scanf("%i",&x);
	for(i=0;i<10;i++){
		if(v[i]==x){
			cont+=1;
		}
	}
	if(cont){
		printf("%i\n",cont);
		for(i=0;i<10;i++){
			if(v[i]==x){
				printf("%i ", i);
			}
		}
		printf("\n");
	}else{
		printf("Mia x\n");
	}

	return 0;
}
