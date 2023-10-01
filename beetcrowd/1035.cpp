#include <iostream>
using namespace std;
 
int main() {
    int a,b,c,d;cin>>a>>b>>c>>d;
    int sumAB=a+b,sumCD=c+d;
    if(b>c && d>a && sumCD>sumAB && a%2==0){
        printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}