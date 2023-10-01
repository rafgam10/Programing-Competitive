#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

//Não resolveu, precisa do set;
//Tá errando o Código;

int main(){
    ll n,contI=0,vN;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    for(int i=0;i<n;++i){
        vN=v[i];
        for(int i=0;i<n;++i){
            if(v[i] == vN){
                contI+=1;
            }
        }
    }
    cout<<contI<<endl;


    return 0;
}