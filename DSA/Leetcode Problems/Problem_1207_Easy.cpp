/*
Problem Link: https://leetcode.com/problems/unique-number-of-occurrences/
Problem Description: 
Given an array of integers arr, return true if the number 
of occurrences of each value in the array is unique or 
false otherwise.


Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 
2 has 2 and 3 has 1. No two values have the same 
number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/

#include<bits/stdc++.h>
using namespace std;

void input(int arr[10], int n){
    
    for ( int i = 0; i < n; i++ ) {
        cin >> arr[i];
    }
}

bool uniqueOccurrences( int arr[10], int n) {
    int count = 1;
    int ans = 0;
    int occur[n];

    for ( int i = 0; i < n; i++ ) {
        for (int j = i+1; j<n; j++) {
            if ( arr[i] == arr[j] ) {
                count++;
                occur[i] = count;
            }
        }
    }
    int s = sizeof(occur)/sizeof(occur[0]);
    for (int i = 0; i<s; i++) {
        ans = ans & occur[i];
    }
    
    return ans;
}

int main() {
    int arr[1000];
    int n; // n = length of array
    cin >> n;
    input( arr , n );
    if (uniqueOccurrences( arr, n ) == 1) {
        cout << "true" << endl;
    }
    else cout << "false" << endl;
return 0;
}


