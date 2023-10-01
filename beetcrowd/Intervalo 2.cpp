#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main(){
    int N;
    cin>>N;
    int in=0,out=0;
    for(int i=0;i<N;i++){
        int X;
        cin>>X;
        if(X>=10 && X<=20){
            in++;
        }else{
            out++;
        }
    }
    cout<<in<<" in\n"<<out<<" out\n";

    return 0;
}
