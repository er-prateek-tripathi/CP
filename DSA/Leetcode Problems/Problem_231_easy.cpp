/*
Problem Link: https://leetcode.com/problems/power-of-two/
similar solution for questions "Power of 3" & "Power fo 4".
Problem Description:
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool flag;
    long int ans = 0;
    for ( int i = 0; i <= 30; i++ ) {
        ans = pow( 2, i );
        
    }
    if ( ans == n ) {
            flag = true;
        }
        else flag = false;

    if (flag == true) {
        cout<<"Yes";
    }
    else cout<<"no";

return 0;
}