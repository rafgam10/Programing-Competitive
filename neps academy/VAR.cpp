#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Cendl cout<<endl;
int N;


int main(){
	
	int X,Y;
	cin>>X>>Y;
	
	if(X >= -8 && X <= 8 && Y >= 0 && Y <= 8){
		cout<<"S"<<endl;
	}else{
		cout<<"N"<<endl;
	}
	
	
	
	return 0;
}