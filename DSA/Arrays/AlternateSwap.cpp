/* Program to swap the alternate elements in an array
Ex: arr[] = {1, 2, 3, 4, 5, 6}
    O/P: swapArr[] = {2, 1, 4, 3, 6, 5}
Ex: No. of elements: 10
    0 9 8 7 6 5 4 3 2 1
    Reversed Array: 9 0 7 8 5 6 3 4 1 2 
*/

#include<bits/stdc++.h>
using namespace std;

void input(int arr[], int n) {

    for ( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }

}

void Alt_Swap( int arr[], int n) {
    int temp = 0;
    for( int i = 0; i < n-1; i = i + 2 ){
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
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
    Alt_Swap ( arr, n );
    output (arr, n);

return 0;
}