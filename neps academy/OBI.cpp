#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

//https://neps.academy/br/exercise/221

int main() {
    int N,P,anx=0;cin>>N>>P;
    vector<int> x(N), y(N), sum(N);
    for(int i=0;i<N;i++){
        cin>>x[i]>>y[i];
        sum[i]=x[i]+y[i];
    }
    for(int i=0;i<N;i++){
        if(sum[i]>=P) anx++;
    }
    cout<<anx<<endl;


}