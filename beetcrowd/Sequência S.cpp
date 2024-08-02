#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    
    double S=0.0;

    for(int i=1;i<=100;i++){

        S+= 1.0/i;

    }

    cout<<fixed<<setprecision(2)<<(double) S<<endl;


    return 0;
}
