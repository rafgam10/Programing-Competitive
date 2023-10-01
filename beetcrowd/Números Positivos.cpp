#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int array[6],num;
    for(int i=0;i<6;i++){
        cin>>array[i];
    }
    for(int i=0;i<6;i++){
        if(array[i]>0){
            num++;
        }
    }
    cout<<num<<" valores positivos\n";

    return 0;
}
