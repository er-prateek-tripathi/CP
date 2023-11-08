// Program to find the unique element in an array which
// may contain certain duplicate elements

#include<bits/stdc++.h>
using namespace std;

void input(int arr[10], int n){
    
    for ( int i = 0; i < n; i++ ) {
        cin >> arr[i];
    }
}

void uniqueElement( int arr[10], int n) {
    int ans = 0;

    for ( int i = 0; i < n; i++ ) {
        ans = ans ^ arr[i];
    }
        
    cout << ans;
}

int main() {
    int t; // t = test cases
    cin >> t;
    int arr[10];
    while(t--) {
        int n; // n = length of array
        cin >> n;

        input( arr , n );
        uniqueElement( arr, n );
    }
return 0;
}

