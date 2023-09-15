#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 2;
    int b = a + 1;

    if ( (a = 3) == b) {
        cout << a << "IF Printed";
    }
    else {
        cout << a+1 << "Else Printed";
    }
}