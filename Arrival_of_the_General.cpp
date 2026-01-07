#include <bits/stdc++.h> 
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    int minimum = 101;
    int minimumPos;
    
    int maximum = 0;
    int maximumPos;

    int tmp;
    vector<int> test;
    for(int i = 0; i<t;i++){
        cin>> tmp;
        test.push_back(tmp);

        if(tmp>maximum){
            maximum = tmp;
            maximumPos = i;
        }
        if(tmp<=minimum){
            minimum = tmp;
            minimumPos = i;
        }
    }
    if(test[0] == maximum && test[test.size()-1] == minimum) cout << 0;
    else{
        if(minimumPos>maximumPos){
            cout << maximumPos+(t-1 - minimumPos);
        }else{
            cout << (t-(minimumPos+1)) + maximumPos-1;
        }
    }

    // cout << maximum << " "<<maximumPos<<endl;
    // cout << minimum << " "<<minimumPos<<endl;
    return 0;
}