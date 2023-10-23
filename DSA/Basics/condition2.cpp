/*
This code depicts that a program or a function of 
a program with multiple if conditions will stop execution
as soon as the first condtion is met.
*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 24; 

    if ( a > 20) {
        cout<< " P ";
    }
    else if ( a == 24 ) {
        cout << " Py ";
    }
    else {
        cout << " T ";
    }
    cout << "Outside";
}