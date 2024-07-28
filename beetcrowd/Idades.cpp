#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    
    int idade,i=0,media=0;

    while(cin>>idade && idade>=0){
        media+=idade;
        i++;
    }

    if(i>0){
        cout<<fixed<<setprecision(2)<<(double)media/i<<endl;
    }
    

    return 0;
}
