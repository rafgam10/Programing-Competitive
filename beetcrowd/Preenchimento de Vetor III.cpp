#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(int argc, char const *argv[]){
    ar<double, 100> vetor;

    double x;cin>>fixed>>setprecision(4)>>x;
    vetor[0]=x;
    for (int i = 1; i <= 99; i++){
        cout<<fixed<<setprecision(4);
        vetor[i]=x/2;
        x=vetor[i];
    }

    for (int i = 0; i <= 99; i++){
        cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<vetor[i]<<endl;
    }
        

    return 0;
}
