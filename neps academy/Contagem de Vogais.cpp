#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

int main(){
    int N,ans=0;
    cin>>N;
    char S[N],vogais[]={'a', 'i', 'u', 'e', 'o'};
    for(int i=0;i<N;i++){
        cin>>S[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(S[i]==vogais[j]){
                ans++;
            }
        }
    }
    cout<<ans<<endl;

}