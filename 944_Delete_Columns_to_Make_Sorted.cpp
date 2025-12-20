#include <bits/stdc++.h>
#include <set>
#include <string>
#include <vector>

using namespace std;

int minDeletionSize(vector<string> &strs) {

  int count = 0;

  int rows = strs.size();
  int cols = strs[0].size();

  for (int i = 0; i < cols; i++) {
    for (int j = 1; j < rows; j++) {
      if (strs[j][i] < strs[j-1][i]) {
        count++;
        break;
      };
    }
  }

  return count;
}

int main() {

  vector<string> testCases = {"rrjk","furt","guzm"};

  cout << minDeletionSize(testCases);

  return 0;
}