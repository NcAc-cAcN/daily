#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<char, int> charCount;

  string testCase;
  cin >> testCase;

  char maxChar;
  for (char c : testCase) {
    maxChar = max(maxChar, c);
    if (charCount.find(c) == charCount.end()) {
      charCount[c] = 0;
    } else {
      charCount[c] += 1;
    }
  }

  for (int r = 0; r<charCount[maxChar]+1; r++) {
    cout << maxChar;
  }
  return 0;
}