#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int A,B,menor,maior;
	cin>>A>>B;
	if(A+B > A-B){
		maior=A+B;
	}else{
		maior=A-B;
	}
	if(A+B < A-B){
		menor=A+B;
	}else{
		menor=A-B;
	}
	
	cout<<maior<<endl;
	cout<<menor<<endl;
	
	
	return 0;
}