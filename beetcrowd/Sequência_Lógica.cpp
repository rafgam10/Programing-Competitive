#include <bits/stdc++.h>
using namespace std;
#define ll long long;


int main(){
    
    int n;
    cin>>n;

    for(int i=1;i<=n;++i){
        cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
        cout<<i<<" "<<i*i+1<<" "<<i*i*i+1<<endl;
    }

    /*
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        cout << i << " " << i * i << " " << i * i * i << endl;
        cout << i << " " << i * i + 1 << " " << i * i * i + 1 << endl;
    }

    return 0;
    
    */

    return 0;
}