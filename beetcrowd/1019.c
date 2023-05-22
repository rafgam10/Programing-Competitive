#include <stdio.h>

int duracaoSegundosParaHoras(int segundos){
    return segundos/3600;
}
int duracaoSegundosParaMinutos(int segundos){
    return (segundos % 3600)/60;
}
int duracaoSegundosParaSegundos(int segundos){
    return segundos%60;
}
int main() {
    int n;
    scanf("%i",&n);
    printf("%i:%i:%i\n",duracaoSegundosParaHoras(n),duracaoSegundosParaMinutos(n),duracaoSegundosParaSegundos(n));
    return 0;
}