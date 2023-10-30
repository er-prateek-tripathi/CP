// Finding nth term of an AP: 3*n+7

#include<bits/stdc++.h>
using namespace std;

int series(int n) {
    int nth = 3*n + 7;
    return nth;
}

int main() {
    int n; 
    cin >> n;
    cout << series(n);
return 0;
}