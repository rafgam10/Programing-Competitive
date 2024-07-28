#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    
    int t,e1=0,e2=0,e3=0,e4=0;
    cin>>t;

    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;

    if(a==1){
        e1++;
    }else if(a==2){
        e2++;
    }else if(a==3){
        e3++;
    }else if(a==4){
        e4++;
    }
    
    if(b==1){
        e1++;
    }else if(b==2){
        e2++;
    }else if(b==3){
        e3++;
    }else if(b==4){
        e4++;
    }

    if(c==1){
        e1++;
    }else if(c==2){
        e2++;
    }else if(c==3){
        e3++;
    }else if(c==4){
        e4++;
    }
    
    if(d==1){
        e1++;
    }else if(d==2){
        e2++;
    }else if(d==3){
        e3++;
    }else if(d==4){
        e4++;
    }


    if(e==1){
        e1++;
    }else if(e==2){
        e2++;
    }else if(e==3){
        e3++;
    }else if(e==4){
        e4++;
    }


    if(t==1){
        cout<<e1<<endl;
    }else if(t==2){
        cout<<e2<<endl;
    }else if(t==3){
        cout<<e3<<endl;
    }else{
        cout<<e4<<endl;
    }
        


    return 0;
}
