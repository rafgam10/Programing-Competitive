#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

int main() {
    
    int a1,d1,a2,d2;
    cin>>a1>>d1>>a2>>d2;

    if(a1!=d2 && d1==a2){
        cout<<"1\n";
    }else if(a2!=d1 && d2==a1){
        cout<<"2\n";
    }else{
        cout<<"-1\n";
    }
    

}