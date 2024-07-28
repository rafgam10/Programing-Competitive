#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    
    int x,valor;

    while(true){

        cin>>x;
        if(x==0) break;

        valor=0;

        if(x%2==0) valor+=x;
        else valor+=++x;

        for(int i=0;i<4;i++){
        
            x+=2;
            valor+=x;

        }

        cout<<valor<<endl;

    }


    return 0;
}
