#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){
    int n,m = 0;
    int count = 0;

    cin>> n>>m;

    for(int b = 0;b<1000;b++){
        for(int a = 0;a<1000;a++){
            bool firstConditional = (((pow(a, 2))+b)==n);
            bool secondConditional = ((a+(pow(b,2)))==m);
            if (firstConditional && secondConditional) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}