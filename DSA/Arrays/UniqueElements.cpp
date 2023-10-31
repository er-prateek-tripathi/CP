// Program to find unique elements in an array.

#include<bits/stdc++.h>
using namespace std;

void input (int arr[], int n) {

    for ( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }

}

void Unique_Elements ( int arr[], int n) {
    
    for( int i = 0; i < n; i++) {
        int j;
        for ( j = 0; j < i; j++ ) {
            if ( arr[i] == arr[j] )
                break;
        }
        if ( i == j ) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[1000];
    int n;

    cout << "No. of elements: ";
    cin >> n;

    input ( arr, n);
    Unique_Elements ( arr, n );

return 0;
}