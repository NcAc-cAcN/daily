#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  int t = 0;
  cin >> t;

  string n;
  string prev;
  
  cin >> n;

  int c = 1;
  while (t--) {
    prev = n;
    cin >> n;
    if (n != prev) {
      c++;
    }
  }
  cout << c;
  return 0;
}