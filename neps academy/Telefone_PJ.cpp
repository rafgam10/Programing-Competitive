#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

//https://neps.academy/br/exercise/592

int main() {
    string textM;
    cin>>textM;

    int n=textM.size();
    vector<string> telefone(n);

    for(int i=0;i<textM.size();i++){
        if(textM[i]=='A'||textM[i]=='B'||textM[i]=='C'){
            telefone[i]='2';
        }else if(textM[i]=='D'||textM[i]=='E'||textM[i]=='F'){
            telefone[i]='3';
        }else if(textM[i]=='G'||textM[i]=='H'||textM[i]=='I'){
            telefone[i]='4';
        }else if(textM[i]=='J'||textM[i]=='K'||textM[i]=='L'){
            telefone[i]='5';
        }else if(textM[i]=='M'||textM[i]=='N'||textM[i]=='O'){
            telefone[i]='6';
        }else if(textM[i]=='P'||textM[i]=='Q'||textM[i]=='R'||textM[i]=='S'){
            telefone[i]='7';
        }else if(textM[i]=='T'||textM[i]=='U'||textM[i]=='V'){
            telefone[i]='8';
        }else if(textM[i]=='W'||textM[i]=='X'||textM[i]=='Y'||textM[i]=='Z'){
            telefone[i]='9';
        }else if(textM[i]=='-'){
            telefone[i]="-";
        }
    }

    for(int i=0;i<n;i++){
        cout<<telefone[i];
    }
    

}