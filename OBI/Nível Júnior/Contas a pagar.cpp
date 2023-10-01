#include <iostream>
using namespace std;

int main() {
    //Continuar com o processor de resolve
    //a questão;

    int v,a,b,c,num=0;
    cin>>v>>a>>b>>c;
    if(v>=a)num++;
    if(v>=b)num++;
    if(v>=c)num++;
    cout<<num<<"\n";

    return 0;
}
