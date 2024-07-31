#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define max 100100

//Uso de set, set é um conjunto que os elementos não se repente
//e tbm já são ordenados automaticos.

int main(){

    int n,anx=0;
    cin>>n;

    set<int> ViSet;

    for(int i=0;i<n;i++){
        int aluno;
        cin>>aluno;

        ViSet.insert(aluno);
    }

    for(auto x : ViSet){
        anx++;
    }

    cout<<anx<<endl;



    return 0;
}