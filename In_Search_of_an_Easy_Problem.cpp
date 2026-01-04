#include <bits/stdc++.h>

using namespace std;

int main(){
    int t = 0;
    cin >>t;

    int n = 0;
    while(t--){
        cin >> n;
        if (n==1){
            break;
        }
    }
    if(n == 1){
        cout << "HARD";
    }else{
        cout << "EASY";
    }
    return 0;
}