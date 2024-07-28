#include <bits/stdc++.h>
using namespace std;

// Fatorial Simples em C++ 1153;

int main(int argc, char const *argv[]){
    
    int n;
    cin>>n;
    int fat=1;
    


    for( int i=1; i <= n ;i++){

        fat*=i;

    }

    cout<<fat<<endl;
    


    return 0;
}
