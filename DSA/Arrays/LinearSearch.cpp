// Program to implement linear search in an array.

#include<bits/stdc++.h>
using namespace std;

void LS ( int arr[], int n, int num ) {
    
    // Linear Search
    int flag = 0;
    for ( int i = 0; i < n; i++ ) {
        if ( arr[i] == num ) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) cout << " Element Found!! ";
    else cout << " Not Found!! ";
}

int main() {
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int num;
    cout << " Enter the element to be searched: " << endl;
    cin >> num;

    LS ( arr, n, num ); 
return 0;
}