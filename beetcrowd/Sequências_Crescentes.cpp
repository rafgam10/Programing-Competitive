#include <bits/stdc++.h>
using namespace std;
#define ll long long;


int main(){
    
    int n;
    cin>>n;
    while(n!=0){
        for(int i=1;i<=n;i++){
            cout<<i;
            if(i!=n){
                cout<<" ";
            }
        }
        cout<<endl;
        cin>>n;
    }
    

    return 0;
}