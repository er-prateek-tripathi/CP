/*
Problem Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

Problem Description: 
An array arr is a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.

Example 1:

Input: arr = [0,1,0]
Output: 1


Example 2:

Input: arr = [0,2,1,0]
Output: 1


Example 3:

Input: arr = [0,10,5,2]
Output: 1
 

Constraints:

3 <= arr.length <= 105
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.
*/

#include<bits/stdc++.h>
using namespace std;

void input (vector <int> &arr, int n) {
    arr.clear();
    int input;
    cout << " Enter the elements of the array: ";
    for ( int i = 0; i < n; i++ ){
        cin >> input;
        arr.push_back(input);
    }
}

int peakIndexInMountainArray ( vector <int>& arr, int n) {
    
    input(arr, n);
    int start = 0;
    int end = n - 1;
    int mid = start + ( end - start ) / 2;

    while ( start < end ) {
        if ( arr[mid] < arr[mid + 1] ) {
            start = mid + 1;
        }

        else {
            end = mid;
        }
        mid = start + ( end - start ) / 2;
    }
    return end;
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
        int index = peakIndexInMountainArray ( arr, n );
        cout << " Index of Peak element: " << index;
    }


return 0;
}