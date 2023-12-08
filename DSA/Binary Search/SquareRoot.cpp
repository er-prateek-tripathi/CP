/*
n = input
Ideology:
1. search space = 0 -> n.
2. if mid*mid > n Go left
3. keep on going util nearest value is found

*/

#include<bits/stdc++.h>
using namespace std;

long long int sqrt( int n ) {
    int s = 0;
    int e = n;

    long long int mid = (s + (( e - s )) /2);
    long long int ans = -1;

    while( s <= e ) {
        long long int square = mid * mid;

        if ( square == n ) {
            return mid;
        }

        if ( square < n ) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = (s + (( e - s )) /2);
        
    }
    return ans;
}

double morePrecision( int n, int precision, int tempSol ){
    double factor = 1;
    double ans  = tempSol;

    for ( int i = 0; i < precision; i++) {
        factor = factor/10;
        for ( double j = ans; j*j < n; j = j + factor ) {
            ans = j;
        }
    } 
    return ans;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int tempSol = sqrt(n);

    cout << "Square Root: " << morePrecision( n, 3, tempSol);
return 0;
}