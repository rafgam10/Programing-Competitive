#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

int main() {
    int n,dezenas,unidade;
    cin>>n;
    dezenas=(n/10)%10;
    unidade=n%10;
    if(dezenas==unidade){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }

}