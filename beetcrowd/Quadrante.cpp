#include <bits/stdc++.h>
using namespace std;
#define ll long long;


int main(){
    int x,y;
    cin>>x>>y;
    while(x!=0 && y!=0){
        if(x>0 && y>0){
            cout<<"primeiro\n";
        }else if(x<0 && y>0){
            cout<<"segundo\n";
        }else if(x<0 && y<0){
            cout<<"terceiro\n";
        }else{ 
            cout<<"quarto\n";
        }
        cin>>x>>y;
    }

    return 0;
}