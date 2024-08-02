#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

int main(){
    int S,M,L,Emocao;
    cin>>S>>M>>L;
    
    Emocao=1*S+2*M+3*L;

    if(Emocao >= 10){
        cout<<"happy\n";
    }else{
        cout<<"sad\n";
    }
    
    return 0;
}