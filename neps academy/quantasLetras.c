#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){    	
    char s[50],c;
    int cont=0;
    scanf("%s %c",s,&c);
    for(int i=0; i<strlen(s);i++){
        if(s[i] == c){
            cont++;
        }
    }
    printf("%i\n",cont);

    return 0;
}