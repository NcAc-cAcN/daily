#include <array>
#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
    int  n =0;
    int m = 0;
    cin >> n>>m;
    
    vector<int> x;
    vector<int> y;

    for (int i = 0; i<n; i++) {
        for (int r = 0; r<m; r++) {
            char c;
            cin >> c;
            if (c == '*') {
                y.push_back(i+1);
                x.push_back(r+1);
            }
        }
    }

    int final_x = x[0]^x[1]^x[2];
    int final_y = y[0]^y[1]^y[2];

    cout << final_y << " " <<final_x;


    return 0;
}