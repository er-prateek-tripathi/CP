// nPr = n!/(n-r)!

#include<bits/stdc++.h>
using namespace std;

int factorial ( int n ) {
    int fact = 1;
    for ( int i = 1; i <= n; i++ ) {
        fact = fact * i;
    }
    return fact;
}

int nPr (int n, int r) {
    int numer = factorial(n);
    int denom = factorial(n-r);
    int nPr = numer/denom;
    return nPr;
}

int main() {
    int n, r;
    cout << "Enter the value of N and R: " << endl;
    cin >> n >> r;
    cout << "nPr: " << nPr(n, r);
return 0;
}