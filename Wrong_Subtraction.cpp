#include <bits/stdc++.h>

using namespace std;

int main(){
    int num1,num2 = 0;
    cin >> num1>> num2;

    while (num2--) {
        if(num1%10 != 0){
            num1--;
        }else{
            num1 /=10;
        }
    }
    cout << num1<<endl;
    return 0;
}