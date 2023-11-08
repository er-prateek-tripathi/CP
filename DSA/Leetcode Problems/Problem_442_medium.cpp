/*
Problem Link: https://leetcode.com/problems/find-all-duplicates-in-an-array/
Problem Description: 
Given an integer array nums of length n where all the 
integers of nums are in the range [1, n] and each integer 
appears once or twice, return an array of all the integers 
that appears twice.

You must write an algorithm that runs in O(n) time and 
uses only constant extra space.

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]

Example 2:

Input: nums = [1,1,2]
Output: [1]

Example 3:

Input: nums = [1]
Output: []
 

Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
Each element in nums appears once or twice.
*/

#include<bits/stdc++.h>
using namespace std;

void input (vector <int> &arr, int n) {
    int input;
    for ( int i = 0; i < n; i++ ){
        cin >> input;
        arr.push_back(input);
    }

}

    
vector<int> findDuplicates(vector<int>& nums) {
    vector <int> ans;
    sort ( nums.begin(), nums.end() );
    for( int i = 1; i < nums.size(); i++) {
        if ( nums[i] == nums[i-1] ) {
           ans.push_back(nums[i]);
        }
    }
    return ans;
}

int main() {
    vector <int> arr;
    int n;
 
    cout << "No. of elements: ";
    cin >> n;

    input (arr, n);
    vector <int> ans = findDuplicates ( arr );

    for (int i: ans) {
        cout <<"[ " << i << " ]";
    }

return 0;
}