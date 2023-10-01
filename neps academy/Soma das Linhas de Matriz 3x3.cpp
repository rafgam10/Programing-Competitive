#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

//Não foi feito;

int main(){
    int vet[3][3],sumL1=0,sumL2=0,sumL3=0;

    cin>>vet[0][0]>>vet[1][0]>>vet[2][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<=2;j++){
            cin>>vet[i][j+1];
        }
    }    

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sumL1+=vet[i][j];
        }
    }

    return 0;
}