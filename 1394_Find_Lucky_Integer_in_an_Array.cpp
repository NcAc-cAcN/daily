#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int findLucky(vector<int>& arr) {
    int n = -1;
    map<int, int> freq;

    for(int num : arr){
        if(freq.find(num) == freq.end()){
            freq[num] = 1;
        }else{
            freq[num] += 1;
        }
    }

    for (const auto&[num,freq]:freq) {
        if(num == freq){
            n = max(n,num);
        }
    }

    return n;
}

int main(){
    vector<int> arr = {1,2,2,3,3,3};
    cout << findLucky(arr)<<endl;

    return 0;
}