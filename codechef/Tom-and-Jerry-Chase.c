#include <stdio.h>

int main(void) {
    int t,i;
    scanf("%i",&t);
    int x[t],y[t];
    for(i=0;i<t;i++){
        scanf("%i %i",&x[i],&y[i]);
    }
    for(i=0;i<t;i++){
        if(x[i]>=y[i]){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
	return 0;
}