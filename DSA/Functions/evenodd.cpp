#include<bits/stdc++.h>
using namespace std;

bool even_odd() {
    int num;
    cin >> num;

    if ( num % 2 == 0) {
        return true;
    }

    else return false;
}

int main() {
    cout << even_odd();
return 0;
}