#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    string inpt="";
    string inpt2 = "";
    cin >> inpt;
    cin >> inpt2;
    
    for(int i = 0; i<inpt.size();i++){
        cout << ((inpt[i]^inpt2[i]) ? 1:0);
    }
    return 0;
}