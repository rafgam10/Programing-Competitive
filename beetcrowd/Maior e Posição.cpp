#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define OU ||;
#define END &&;

int main(){
    int maior=-1,posicao=0;
    for(int i=1;i<=100; i++){
        int val;
        cin>>val;
        if(val>maior){
            maior=val;
            posicao=i;
        }
    }
    cout<<maior<<endl<<posicao<<endl;


    return 0;
}