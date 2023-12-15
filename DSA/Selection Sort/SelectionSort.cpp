#include<bits/stdc++.h>
using namespace std;

void sorted( vector <int>& arr, int n ) {
    for ( int i = 0; i < n - 1; i++ ) {

        int minIndex = i;

        for ( int j = i + 1; j < n; j++ ) {

            if ( arr[j] < arr[minIndex] )
                minIndex = j;

        }
        
        swap( arr[minIndex], arr[i] );

    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
}

int main() {

    vector <int> arr;

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int input;
    for ( int i = 0; i < n; i++) {
        cin >> input;
        arr.push_back(input);
    }

    sorted( arr, n );
    

return 0;
}