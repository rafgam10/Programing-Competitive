#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int a,b,c,cont=0;
    cin>>a>>b>>c;
    if((a+b)<c){
        cont=1;
    }else if(a==b && a==c){
        cont=3;
    }else if(a<b && b==c){
        cont=2;
    }else if(a==b && (a+b)<c){
        cont=1;
    }else if(a==b && a<c && b<c){
        cont=2;
    }

    cout<<cont<<endl;

    return 0;
}
