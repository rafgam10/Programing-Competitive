#include <stdio.h>

int main(void) {
	int t,i;
    scanf("%i",&t);
    int n[t],m[t];
    for(i=0;i<t;i++){
        scanf("%i %i",&n[i],&m[i]);
    }
    for(i=0;i<t;i++){
        if(n[i]<m[i])printf("%i\n",0);
        else printf("%i\n",n[i]-m[i]);
    }

	return 0;
}

