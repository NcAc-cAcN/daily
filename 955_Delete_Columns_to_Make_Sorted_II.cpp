#include <bits/stdc++.h>
#include <set>
#include <string>
#include <vector>

using namespace std;

int minDeletionSize(vector<string> &strs) {
  int n = strs.size();
  int m = strs[0].size();

  vector<bool> resolved(n - 1, false);
  int unresolved = n - 1;
  int deletions = 0;

  for (int col = 0; col < m && unresolved > 0; col++) {
    bool bad = false;

    for (int i = 0; i < n - 1; i++) {
      if (!resolved[i] && strs[i][col] > strs[i + 1][col]) {
        bad = true;
        break;
      }
    }

    if (bad) {
      deletions++;
      continue;
    }
    for (int i = 0; i < n - 1; i++) {
      if (!resolved[i] && strs[i][col] < strs[i + 1][col]) {
        resolved[i] = true;
        unresolved--;
      }
    }
  }
  return deletions;
}

int main() {

  vector<string> testCases = {"zyx", "wvu", "tsr"};

  cout << minDeletionSize(testCases);

  return 0;
}