#include <stdio.h>

int main(void) {
	int t,i;
    scanf("%i",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%i",&x[i]);
    }
    for(i=0;i<t;i++){
        if(x[i]<=24){
            printf("NO\n");
        }else printf("YES\n");
    }
	return 0;
}