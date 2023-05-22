#include <stdio.h>

int main(void) {
	int t,i;
    scanf("%i",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%i",&x[i]);
    }
    for(i=0;i<t;i++){
        printf("%i\n",x[i]*15);
    }
	return 0;
}