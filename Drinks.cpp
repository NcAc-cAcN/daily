#include <bits/stdc++.h>
#include <iomanip>
#include <ios>

using namespace std;
int main(){
    int t = 0;
    cin >>t;

    int n = 0;
    float res = 0;
    while (cin >> n) {
        res += n;
    }

    res /= t;
    cout <<fixed<<setprecision(12)<< res; 
    return 0;
}