#include <stdio.h>

int main(void) {
	int t,i;
    scanf("%i",&t);
    int x[t],y[t],a[t];
    for(i=0;i<t;i++){
        scanf("%i %i %i", &x[i],&y[i],&a[i]);
    }
    for(i=0;i<t;i++){
        if(a[i]>=x[i] && a[i]<y[i]){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
	return 0;
}