#include <stdio.h>

int main(void) {
    int t,i;
    scanf("%i",&t);
    int x[t],y[t];
    for(i=0;i<t;i++){
        scanf("%i %i",&x[i],&y[i]);
    }
    for(i=0;i<t;i++){
        printf("%i\n",x[i]*y[i]);
    }

	return 0;
}