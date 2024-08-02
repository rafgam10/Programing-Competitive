#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

//https://neps.academy/br/exercise/527

int main() {
    int n,m;cin>>n>>m;
    int total=0;
    vector<int> TotalV(n);
    int tempo[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>tempo[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            total+=tempo[i][j];
        }
        TotalV[i]=total;
        total=0;
    }
    int anx=0;
    for (int i = 1; i < n; ++i) {
        if (TotalV[i] < TotalV[anx]) {
            anx = i;
        }
    }

    cout<<anx+1<<endl;


}

