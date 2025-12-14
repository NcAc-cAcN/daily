#include <bits/stdc++.h>
#include <cmath>
#include <iostream>

using namespace std;

int numberOfWays(string corridor) {
    const int mod = 1e9+7;
    vector<int> chairs;
    
    for(int i = 0;i<corridor.size();i++){
        if(corridor[i]=='S')chairs.push_back(i);     
    }

    if((chairs.size() %2 == 1)||(chairs.size()<2)){
        return 0;
    }

    long count = 1;
    for(int c = 2;c<chairs.size();c+=2){
        long spaces =chairs[c]-chairs[-1+c] ;
        count = (spaces*count)% mod ;
    }
    
    return count;
}

int main() {
  string corridor;
  cin >> corridor;
  cout <<numberOfWays(corridor);
  return 0;
}
