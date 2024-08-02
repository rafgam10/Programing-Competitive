#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define OU ||;
#define END &&;

int main(){
    int N;
    cin>>N;
    for(int i=0;i<10000;i++)
        if(i%N==2)
            cout<<i<<endl;
        
    return 0;
}