// pow(a,b) without using pow keyword
// when using a function, no need to declare it in main.
// when using void, use cout and do not use cout in main.
// when using data-type, use return and use cout in main.
#include<bits/stdc++.h>
using namespace std;

void power(int n, int m) {
    int ans = 1;
    for(int i = 1; i<=m; i++){
        ans *= n;
    }
    cout<< ans;
}

int main() {
    //int power(int n, int m);
    int a, b;
    cin>>a>>b;
    power(a,b);
return 0;
}