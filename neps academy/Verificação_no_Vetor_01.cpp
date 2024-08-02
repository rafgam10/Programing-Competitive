#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

//https://neps.academy/br/exercise/196
//Na exercutação do código deu certo, porém no Juiz não está correto;

int main() {
    int N;cin>>N;
    vector<int>Li(N);
    for(int i=0;i<N;i++){
        cin>>Li[i];
    }

    int Q;cin>>Q;
    vector<int>Xi(Q);
    for(int i=0;i<Q;i++){
        cin>>Xi[i];
    }
    vector<string> anx(N);
    for(int i=0;i<Xi.size();i++){
        for(int j=0;j<Li.size();j++){
            if(Xi[i] == Li[j]){
                anx[i]="Sim";
                break;
            }else{
                anx[i]="Nao";
            }
        }
    }

    for(int i=0;i<anx.size();i++){
        cout<<anx[i]<<endl;
    }

}

