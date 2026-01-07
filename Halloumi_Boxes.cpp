#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
  
  int t;
  cin >> t;

  int k,n;
  int num;


  while (t--) {
    cin >> k>> n;
    int res[k];
    for(int i=0; i<k;i++){
      cin >> num;
      res[i] = num;
    }

    if (is_sorted(res,res+k)|| n> 1) {
      cout << "YES"<<endl;
    }else{
      cout << "NO"<<endl;
    }

  }
  
  return 0;
}