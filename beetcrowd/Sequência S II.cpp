#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    
    double S=0, numerador=1, denominador=1;

    for(int i=1; i<=20; i++){

        S+= numerador/denominador;
        numerador+=2;
        denominador+=denominador;

    }

    cout<<fixed<<setprecision(2)<<(double)S<<endl;


    return 0;
}
