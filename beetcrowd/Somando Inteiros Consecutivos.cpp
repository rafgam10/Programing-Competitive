#include <bits/stdc++.h>
using namespace std;

// 1149 do BEE;

int main(int argc, char const *argv[]){
    
    int a; cin>>a;

    int n; cin>>n;
    while(n<=0){
        cin>>n;
    }

    int aN=a;
    for(int i=0; i<n-1;i++){
        a+=1;
        aN+=a;
    
    }

    cout<<aN<<endl;



    return 0;
}
