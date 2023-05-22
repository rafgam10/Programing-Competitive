#include <stdio.h>

int main(void) {
	int n,i;
    scanf("%i",&n);
    int t[n];
    for(i=0;i<n;i++){
        scanf("%i",&t[i]);
    }
    for(i=0;i<n;i++){
        if(t[i]%3==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
	return 0;
}