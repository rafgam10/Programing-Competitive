#include <stdio.h>

int main(int argc, char const *argv[]){
    int iv,im,in;
    scanf("%i",&iv);
    scanf("%i",&im);
    scanf("%i",&in);
    if(iv==im && iv==in){
        printf("%i\n",iv);
    }else if(iv==im || iv==in){
        printf("%i\n",iv);
    }else if(im>iv && im<in){
        printf("%i\n",im);
    }else if(in>iv && in<im){
        printf("%i\n",in);
    }else if(iv>im && iv<in){
        printf("%i\n",iv);
    }
    return 0;
}
