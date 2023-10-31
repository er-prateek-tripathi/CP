// This program will giv us the sum 
// of all elements in the array.

#include<bits/stdc++.h>
using namespace std;

void input(int arr[], int n) {

    for ( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }

}

int ArrSum( int arr[], int n) {
    int sum = 0;
    for ( int i = 0; i < n; i++ ) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    // Taking input
    int n;
    cout << " Enter the size of the array: " << endl;
    cin >> n;

    int arr[1000];

    input(arr, n); // function to take input.

    cout<< "Sum : " << ArrSum(arr, n);

return 0;
}