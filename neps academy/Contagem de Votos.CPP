#include <bits/stdc++.h>
using namespace std;

#define vec vector

int main(int argc, char const *argv[]){
    
    int v, contA=0,contB=0;cin>>v;

    vec<char> votos(v);

    for(int i=0;i<v;i++){
        cin>>votos[i];

        if(votos[i] == 'A') contA++;
        if(votos[i] == 'B') contB++;

    }

    if(contA>contB) cout<<"A"<<endl;
    else if(contA < contB) cout<<"B"<<endl;
    else cout<<"Tie"<<endl;


    return 0;
}
