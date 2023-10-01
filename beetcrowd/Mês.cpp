#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    string mêses[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    int escolher;
    cin>>escolher;
    cout<<mêses[escolher-1]<<endl;

    return 0;
}
