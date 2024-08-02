#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    
    int v;
    cin>>v;

    //O Juiz do BEE não usar o vetor para nada, mas
    //tem que colocar o vetor no código para ler o código no Juiz kkk;
    vector<int> vetor(10);

    for(int i=0;i<=10;i++){        
        cout<<"N["<<i<<"] = "<<v<<endl;
        v*=2;
    }


    return 0;
}
