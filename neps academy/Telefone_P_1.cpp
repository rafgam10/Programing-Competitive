#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

//https://neps.academy/br/exercise/235

int main() {
    string textM;
    cin>>textM;

    int n=textM.size();
    vector<string> telefone(n);

    for(int i=0;i<textM.size();i++){
        if(textM[i]=='1'){
            telefone[i]='1';
        }else if(textM[i]=='A'||textM[i]=='B'||textM[i]=='C' || textM[i]=='2'){
            telefone[i]='2';
        }else if(textM[i]=='D'||textM[i]=='E'||textM[i]=='F'|| textM[i]=='3'){
            telefone[i]='3';
        }else if(textM[i]=='G'||textM[i]=='H'||textM[i]=='I'|| textM[i]=='4'){
            telefone[i]='4';
        }else if(textM[i]=='J'||textM[i]=='K'||textM[i]=='L'|| textM[i]=='5'){
            telefone[i]='5';
        }else if(textM[i]=='M'||textM[i]=='N'||textM[i]=='O'|| textM[i]=='6'){
            telefone[i]='6';
        }else if(textM[i]=='P'||textM[i]=='Q'||textM[i]=='R'||textM[i]=='S'|| textM[i]=='7'){
            telefone[i]='7';
        }else if(textM[i]=='T'||textM[i]=='U'||textM[i]=='V'|| textM[i]=='8'){
            telefone[i]='8';
        }else if(textM[i]=='W'||textM[i]=='X'||textM[i]=='Y'||textM[i]=='Z'|| textM[i]=='9'){
            telefone[i]='9';
        }else if(textM[i]=='-'){
            telefone[i]="-";
        }else if(textM[i]=='0'){
            telefone[i]='0';
        }
    }

    for(int i=0;i<n;i++){
        cout<<telefone[i];
    }
    

}