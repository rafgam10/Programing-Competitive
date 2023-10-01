#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int X;
    cin>>X;
    if(X%2==0){
        X++;
    }
    for(int i=0;i<6;i++){
        cout<<X<<endl;
        X+=2;
    }
    
    return 0;
}
