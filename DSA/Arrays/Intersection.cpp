// Following program will find the intersection of two arrays.

#include<bits/stdc++.h>
using namespace std;

void input (int arr[], int arr1[], int n) {

    cout << "Enter the elements for the First Array: " << endl;
    for ( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }

    cout << "Enter the elements for the Second Array: " << endl;
    for ( int i = 0; i < n; i++ ){
        cin >> arr1[i];
    }

}

void Intersection ( int arr[], int arr1[], int n) {
    
}

int main() {

    int arr[1000], arr1[1000];
    int n;
 
    cout << "No. of elements: ";
    cin >> n;

    input ( arr, arr1, n);
    Intersection ( arr, arr1, n );

return 0;
}