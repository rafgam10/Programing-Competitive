/* #include <iostream>
using namespace std;

bool eh_primo(int x){
    int num=0;
	for(int i=0;i<x;i++){
        if(x%i==0){
            num+=1;
        }
    }
    if(num==2){
        return true;
    }else{
        return false;
    }
    
}

int main(){
	int x;
	cin>>x;
	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
    return 0;
} */

#include <iostream>

using namespace std;

bool eh_primo(int x){
	int divisores = 0;
	
	for (int i = 1; i <= x; i++){
        if (x%i == 0){
            divisores += 1;
        }
	}
	if (divisores == 2){
        return true;
	}
	else{
        return false;
	}
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}
	else{
		cout << "N" << "\n";
	}
}
