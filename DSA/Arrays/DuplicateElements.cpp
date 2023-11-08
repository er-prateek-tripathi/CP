// Program to find and print duplicate elements in an array.
// Problem Link: https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
using namespace std;

void input (int arr[], int n) {

    for ( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }

}

void Duplicate_Elements ( int arr[], int n) {
    
    // for( int i = 0; i < n; i++) {
    //     int j;
    //     for ( j = 0; j < i; j++ ) {
    //         if ( arr[i] == arr[j] )
    //            cout << arr[i] << " ";
    //     }
    // }
    
    // Another Approach

    int ans = 0;

    for ( int i = 0; i < n; i++ ) {
        ans = ans ^ arr[i];
    }

    for ( int i = 1; i < n; i++ ) {
        ans = ans ^ i;
    }

    cout << ans;
}

int main() {
    int arr[1000];
    int n;
 
    cout << "No. of elements: ";
    cin >> n;

    input ( arr, n);
    Duplicate_Elements ( arr, n );

return 0;
}