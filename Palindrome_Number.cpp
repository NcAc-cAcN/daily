#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    int x = 121;
    string xCopy = to_string(x);
    string reverse( xCopy.rbegin(),xCopy.rend());

    return xCopy == reverse;
    return 0; }