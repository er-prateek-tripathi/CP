/*
n = input
Ideology:
1. search space = 0 -> n.
2. if mid*mid > n Go left
3. keep on going util nearest value is found

*/

#include<bits/stdc++.h>
using namespace std;

long long int BS( int n ) {
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

int sqrt(int x){
    return BS(x);
}

int main() {
    cout<<sqrt(36);
return 0;
}