// Program to find Reverse of an array.


#include<bits/stdc++.h>
using namespace std;

void input(int arr[], int n) {

    for ( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }

}

void Reverse_Array( int arr[], int n) {
    int start = 0;
    int end = n-1;

    while( start <= end ) {
        swap ( arr[start], arr[end] );
        start++;
        end--;
    }
}

void output ( int arr[], int n ) {
    cout << "Reversed Array: ";
    for ( int i = 0; i < n; i++ ) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[1000];
    int n;
    cout << "No. of elements: ";
    cin >> n;

    input ( arr, n);
    Reverse_Array ( arr, n );
    output (arr, n);

return 0;
}