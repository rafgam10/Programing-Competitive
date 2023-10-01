#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main(){
    int N;
    cin>>N;
    for (int i = 1; i <= N; i++){
        if(i%2==0){
            cout<<i<<"^2 = "<<fixed<<setprecision(0)<<pow(i,2)<<endl;
        }
    }
    

    return 0;
}
