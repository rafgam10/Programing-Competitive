#include <stdio.h>

int main(int argc, char const *argv[]){
    int t,i;
    scanf("%i",&t);
    int a[t],b[t],sum[t];
    for(i=0;i<t;i++){
        scanf("%i %i",&a[i],&b[i]);
        sum[i]=a[i]+b[i];
    }
    for(i=0;i<t;i++){
        printf("%i\n",sum[i]);
    }

    return 0;
}
