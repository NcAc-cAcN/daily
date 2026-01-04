#include <bits/stdc++.h>
#include <utility>

using namespace std;

int main() {
  int n, t = 0;
  cin >> n >> t;
  string input;
  cin >> input;

  while (t--) {
    for (int i = 0; i < input.length() - 1; i++) {
      if (input[i] == 'B' && input[i + 1] == 'G') {
        swap(input[i], input[i + 1]);
        i++;
      }
    }
  }

  cout << input;
  
  return 0;
}