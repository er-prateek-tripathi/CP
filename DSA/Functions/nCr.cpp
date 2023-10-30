// nCr = n!/r!(n-r)!

#include<bits/stdc++.h>
using namespace std;

int factorial ( int n ) {
    int fact = 1;
    for ( int i = 1; i <= n; i++ ) {
        fact = fact * i;
    }
    return fact;
}

int nCr (int n, int r) {
    int numer = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    int nCr = numer/denom;
    return nCr;
}

int main() {
    int n, r;
    cout << "Enter the value of N and R: " << endl;
    cin >> n >> r;
    cout << "nCr: " << nCr(n, r);
return 0;
}