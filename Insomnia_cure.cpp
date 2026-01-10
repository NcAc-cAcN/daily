#include <bits/stdc++.h>
#include <set>
using namespace std;
int main() {
    set<int> res;
    int k,l,m,n,d;
    cin >> k>>l>>m>>n>>d;

    for (int i = 1; i <d+1;i++){
        if(i%k == 0){
            res.insert(i);
        }
        else if(i%l == 0){
            res.insert(i);
        }
        else if(i%m == 0){
            res.insert(i);
        }
        else if(i%n == 0){
            res.insert(i);
        }
    }

    cout << res.size()<<endl;

    
    
    return 0; }