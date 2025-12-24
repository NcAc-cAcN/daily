#include <cctype>
#include <iostream>

using namespace std;

int main(){
    string toCap;
    cin >> toCap;
    toCap[0] = toupper(toCap[0]);
    cout << toCap;
    return 0;
}