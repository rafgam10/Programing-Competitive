#include <stdio.h>

int main(void) {
    int t,i;
    scanf("%i",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%i",&x[i]);
    }
    for(i=0;i<t;i++){
        if(x[i]>=80){
            printf("YES\n");
        }else {
            printf("NO\n");
        }
    }
	return 0;
}