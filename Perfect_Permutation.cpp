#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin >> n;

    if(n>1 && n%2== 0){
        for(int i = n;n>0;n--)cout<<n<< " ";
    }else{
        cout << -1;
    }

    return 0;
}