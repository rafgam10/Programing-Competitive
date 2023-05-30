#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char nome[50];
    scanf("%s", nome);
    printf("%ld\n", strlen(nome));

    return 0;
}