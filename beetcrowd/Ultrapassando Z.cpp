#include <bits/stdc++.h>
using namespace std;

// 1150 do BEE em C++;


int main() {
    int X, z;
    int soma = 0;
    int num = 0;
    // Leitura do valor de X
    cin >> X;
    while(cin>>z){
        if(z>X){
            break;
        }
    }
    
    while(soma<z){
        soma+=X;
        num++;
        X++;
    }

    cout<<num<<endl;    
    
    

    return 0;
}
