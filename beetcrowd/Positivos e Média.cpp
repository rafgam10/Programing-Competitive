#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    double array[6],sum=0, ans;
    int num=0;
    for(int i=0;i<6;i++){
        cin>>array[i];
    }
    for(int i=0;i<6;i++){
        if(array[i]>0){
            num++;
            sum+=array[i];
        }
    }
    ans=sum/num;
    cout<<num<<" valores positivos\n";
    cout<<fixed<<setprecision(1)<<ans<<endl;

    return 0;
}
