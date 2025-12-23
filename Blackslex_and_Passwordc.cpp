#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCases = 0;
    int k = 0;
    int x = 0;

    cin>> testCases;

    while(testCases--){
        cin >> k>>x;
        cout << (k*x+1)<<endl;
    }
    return 0;
}