#include<bits/stdc++.h>
using namespace std;

int binarySearch( int arr[], int size, int key ) {

    int start = 0; 
    int end = size - 1;

    // int mid = ( start + end ) / 2;
    // optimized formula: 
    int mid = start + (( end - start ) / 2); 

    while ( start <= end) {

        if ( arr[mid] == key ) {
            return mid;
        }

        // going to right part of array
        if ( key > arr[mid] ) {
            start = mid + 1;
        }
        // going to left part of array
        else { // key < arr[mid];
            end = mid - 1;
        }

        //mid = ( start + end ) / 2;
        mid = start + (( end - start ) / 2);

    }

    return -1;

}

int main() {
    int even[6] = { 2, 4, 6, 8, 10, 12 };
    int odd[5] = { 3, 5, 7, 9, 11 };

    int Even_index = binarySearch(even, 6, 12 );
    cout << "12 is located at index: " << Even_index << endl;

    int Odd_index = binarySearch(odd, 5, 7);
    cout << "7 is located at index: " << Odd_index;
return 0;
}
