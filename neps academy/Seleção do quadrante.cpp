#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

int main() {
    int X,Y;
    cin>>X>>Y;
    if(X>0 && Y>0){
        cout<<1<<endl;
    }
    if(X<0 && Y>0){
        cout<<2<<endl;
    }
    if(X<0 && Y<0){
        cout<<3<<endl;
    }
    if(X>0 && Y<0){
        cout<<4<<endl;
    }
}