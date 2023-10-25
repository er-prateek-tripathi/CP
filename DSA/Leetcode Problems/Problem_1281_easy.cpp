/*
Problem Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
Problem Description: 
Given an integer number n, return the difference between 
the product of its digits and the sum of its digits.
 

Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
Example 2:

Input: n = 4421
Output: 21
Explanation: 
Product of digits = 4 * 4 * 2 * 1 = 32 
Sum of digits = 4 + 4 + 2 + 1 = 11 
Result = 32 - 11 = 21
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n;
cin >> n;

int value;
int prod = 1;
int sum = 0;
int difference;

while(n){
    value = n%10;
    prod *= value;
    sum += value;
    n = n/10;
}

//difference = prod > sum ? prod - sum : sum - prod;
// for absolute difference.

difference = prod - sum;

cout<<difference;

return 0;
}
