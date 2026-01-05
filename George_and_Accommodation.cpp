#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int t = 0;
    cin >> t;
    
    int count = 0;
    while(t--){
        int p,q = 0;
        cin >> p>>q;
        if (q-p >= 2){
            count++;
        }
    }
    
    cout << count;
    return 0;
}