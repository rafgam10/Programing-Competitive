#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define OU ||;
#define END &&;

int main(){
    int N;
    cin>>N;
    double arr[N],val1,val2,val3;
    for(int i=0;i<N;i++){
        cin>>val1>>val2>>val3;
        arr[i]=( (val1*2)+(val2*3)+(val3*5) )/10;
    }
    for(int i=0;i<N;i++){
        cout<<fixed<<setprecision(1);
        cout<<arr[i]<<endl;
    }


    return 0;
}