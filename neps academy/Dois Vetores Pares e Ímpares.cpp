#include <bits/stdc++.h>
using namespace std;

#define vec vector

int main(int argc, char const *argv[]){
    
    vec<int> vetorPar, vetorImpar;

    for(int i=0;i<10;i++){
        int x;cin>>x;

        if(x%2==0){
            vetorPar.push_back(x);
        }
        if(x%2!=0){
            vetorImpar.push_back(x);
        }
    }

    for(auto x : vetorPar){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x : vetorImpar){
        cout<<x<<" ";
    }
    

    return 0;
}
