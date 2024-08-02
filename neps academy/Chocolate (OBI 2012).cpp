#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int main(int argc, char const *argv[]){

    //Código não foi finalizando falta de lógica no código;

    /*
        Notação:
            - Todas as barras de chocolate são quadradas;
            - Divide a barra em quatro pedaços quadrados, de lado L/2;
            - Depois, ela repete esse procedimento com cada pedaço gerado, 
              sucessivamente, enquanto o lado for maior 
              do que, ou igual a 2cm;
            -
    */    

   
    int l;cin>>l;

    int val;
    val = (2*(pow(l,4)))/2;

    cout<<val<<endl;


    

    return 0;
}
