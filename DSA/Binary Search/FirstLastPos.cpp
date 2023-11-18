/*
Problem Link: https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

You have been given a sorted array of length N.
You are also given an integer K.
Now your task is to find first and last occurrence
of K in array.

If K is not present, then O/P: -1 -1

Sample Input 1:
8 2
0 0 1 1 2 2 2 2

Sample output 1:
4 7

Explanation of Sample output 1:
For this test-case the first occurrence of 2 in at index 4 and last occurrence is at index 7.


Sample Input 2:
4 2
1 3 3 5

Sample output 2:
-1 -1

Expected Time Complexity:
Try to do this in O(log(n)).


Constraints:
1 <= n <= 10^5
0 <= k <= 10^9
0 <= arr[i] <= 10^9

Time Limit : 1 second

*/

#include<bits/stdc++.h>
using namespace std;

void input (vector <int> &arr, int n) {
    int input;
    cout << " Enter the elements of the array: ";
    for ( int i = 0; i < n; i++ ){
        cin >> input;
        arr.push_back(input);
    }
}

int firstOccurrence( vector <int> &arr, int n, int key) {
    int start = 0, end = n - 1;
    int mid = start + ( end - start ) / 2;
    int ans = -1;

    while ( start <= end ) {
        if ( arr[mid] == key ) {
            ans = mid;
            end = mid - 1;
        }

        else if ( arr[mid] > key ) {
            end = mid - 1;
        }

        else if ( arr[mid] < key ) {
            start = mid + 1;
        }

        mid = start + ( end - start ) / 2;
    }

    return ans;
}

int lastOccurrence( vector <int> &arr, int n, int key) {
    int start = 0, end = n - 1;
    int mid = start + ( end - start ) / 2;
    int ans = -1;

    while ( start <= end ) {
        if ( arr[mid] == key ) {
            ans = mid;
            start = mid + 1;
        }

        else if ( arr[mid] > key ) {
            end = mid - 1;
        }

        else if ( arr[mid] < key ) {
            start = mid + 1;
        }

        mid = start + ( end - start ) / 2;
    }

    return ans;
}

pair <int, int> firstAndLastPosition ( vector <int>& arr, int n, int key) {
    pair <int, int> p;
    input ( arr, n);
    p.first = firstOccurrence ( arr, n, key );
    p.second = lastOccurrence ( arr, n, key );

    return p;
}

int main() {
    int t, input;
    cout << " Enter the number of test cases: ";
    cin >> t;

    vector <int> arr;

    while( t-- ) {
        int n;
        cout << " Enter the size of the array: ";
        cin >> n;

        int key;
        cout << " Enter the key: ";
        cin >> key;

        pair <int, int> p = firstAndLastPosition ( arr, n, key );
        
        cout << " First occurrence is at index: " << p.first << endl;
        cout << " Last occurrence is at index: " << p.second << endl;
    }
return 0;
}