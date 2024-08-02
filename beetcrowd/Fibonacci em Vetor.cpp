#include <bits/stdc++.h>
using namespace std;
#define ll long long 

vector<ll> memo(100, -1); //PD = Programação Dinamica;

ll fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    if(memo[n] != -1) return memo[n];

    memo[n] = fibo(n-2) + fibo(n-1);
    return memo[n];
}

int main(int argc, char const *argv[]){
   
    int t;cin>>t; //Números de Casos;
    vector<ll> vetFib(t), vetAnx(t);

    for(int i=0;i<t;i++){
        cin>>vetFib[i];

        vetAnx[i]=fibo(vetFib[i]);
    }

    for(int i=0;i<t;i++){
        cout<<"Fib("<<vetFib[i]<<") = "<<vetAnx[i]<<endl;
    }


    return 0;
}
