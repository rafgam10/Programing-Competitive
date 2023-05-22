#include <stdio.h>

int main(void) {
	int t,i;
    scanf("%i",&t);
    int x[t],y[t],sum[t];
    for(i=0;i<t;i++){
        scanf("%i %i",&x[i],&y[i]);
        sum[i]=x[i]-y[i];
    }
    for(i=0;i<t;i++){
        printf("%i\n",sum[i]);
    }
	return 0;
}