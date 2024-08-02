#include <bits/stdc++.h>
using namespace std;
#define ll long long;


int main(){
    int n;cin>>n;
    double x,y;

    for(int i=0;i<n;i++){
        cin>>x>>y;

        if(y==0){
            cout<<"divisao impossivel\n";
        }else{
            cout<<fixed<<setprecision(1)<<x/y<<endl;
        }
    }
    
    

    return 0;
}