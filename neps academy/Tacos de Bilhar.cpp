#include <bits/stdc++.h>
using namespace std;

#define st set

int main(int argc, char const *argv[]){
    
    int c, estoque=0;
    cin>>c;
    st<int> tacos;

    for (int i = 0; i < c; i++){
        
        int taco;
        cin>>taco;
        
        if(tacos.find(taco) == tacos.end()){
            estoque+=2;
            tacos.insert(taco);
        }else{
            tacos.erase(taco);
        }

    }

    cout<<estoque<<endl;


    return 0;
}
