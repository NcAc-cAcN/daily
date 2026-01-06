#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  int t = 0;
  int tmp = 0;
  cin >> t;
  vector<int> nums;
  while (t--) {
    cin >> tmp;
    nums.push_back(tmp);
  }

  vector<int> temp(nums.size());
  for(int i = 0; i<nums.size();i++){
    temp[nums[i]-1] = i+1;
  }

  for (int i : temp) {
    cout << i <<" ";
  }

  return 0;
}