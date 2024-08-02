#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main(){
    int value,al=0,ga=0,di=0;
    while(true){
        cin>>value;
        if(value == 1)al++;
        if(value == 2)ga++;
        if(value == 3)di++;
        if(value == 4)break;
    }

    //Imprimir dados:
    cout<<"MUITO OBRIGADO\n";
    cout<<"Alcool: "<<al<<endl;
    cout<<"Gasolina: "<<ga<<endl;
    cout<<"Diesel: "<<di<<endl;

    return 0;
}