#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define OU ||
#define AND &&
int N;


int main(int argc, char const *argv[]){
    int H,ans;
    cin>>N>>H;
    int leq[N];
    for(int i=0;i<N;i++){
        cin>>leq[i];
    }
    for(int i=0;i<N;i++){
        if(leq[i]<=H){
            ans++;
        }
    }
    cout<<ans<<endl;
    


    return 0;
}
