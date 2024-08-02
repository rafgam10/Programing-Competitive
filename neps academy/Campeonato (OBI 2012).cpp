#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Cendl cout<<endl;
int N;


int main() {
   	int Cv,Ce,Cs,Fv,Fe,Fs;
   	cin>>Cv>>Ce>>Cs>>Fv>>Fe>>Fs;
   	int ansC=3*Cv+1*Ce;
   	int ansF=3*Fv+1*Fe;
   	
   	if(ansC > ansF){
   		cout<<"C\n";
   	}else if(ansF > ansC){
   		cout<<"F\n";
   	}else{
   		if(Cs > Fs){
   			cout<<"C\n";
   		}else if(Fs > Cs){
   			cout<<"F\n";
   		}else{
   			cout<<"=\n";
   		}
   	}
   	
   	

    return 0;
}