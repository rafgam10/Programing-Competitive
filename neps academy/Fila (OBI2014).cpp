#include <bits/stdc++.h>
using namespace std;

//Resultando foi certo, mas não é assim o código;

int main(int argc, char const *argv[]){
    
    int n;
    cin>>n;
    vector<int> filaN(n);

    for(int i=0;i<n;i++){
        cin>>filaN[i];
    }

    int m;
    cin>>m;
    vector<int> filaM(m);

    for(int i=0;i<m;i++){
        cin>>filaM[i];
    }

    vector<int> filaNova(n);
    for(int i=0;i<n;i++){
        filaNova[i]=filaN[i];
    }    



    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(filaNova[i] == filaM[j]){
                filaNova.erase(filaNova.begin()+i);
            }

        }

    }

    for(int i=0;i<filaNova.size();i++){
        cout<<filaNova[i]<<" ";
    }


    return 0;
}
