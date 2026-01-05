#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n = 0;
    cin >> n;
    long long res = 0;
    if (n%2==0){
         res= n/2;
    }
    else{
        res = -n/2 -1;
    }
    cout << res;
    return 0;
}