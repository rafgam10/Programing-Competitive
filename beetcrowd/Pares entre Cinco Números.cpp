#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int array[5],num=0;
    for(int i=0;i<5;i++){
        cin>>array[i];
    }
    for(int i=0;i<5;i++){
        if(array[i]%2==0){
            num++;
        }
    }
    cout<<num<<" valores pares\n";
    

    return 0;
}
