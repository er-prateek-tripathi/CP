// Problem Link: https://www.codingninjas.com/studio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void input (vector <int> &arr, int n) {

    int input;
    for ( int i = 0; i < n; i++ ){
        cin >> input;
        arr.push_back(input);
    }
}

vector<vector<int>> pairSum ( vector <int> &arr, int S) {
    vector<vector<int>> ans;
    
    // This loop is comparing value at i to all the values after i.
    for (int i = 0; i < arr.size(); i++) {
        for ( int j = i + 1; j < arr.size(); j++) {
            if ( arr[i] + arr[j] == S) {
                vector <int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {

    vector <int> arr;
    int n, s;
 
    cout << "No. of elements: ";
    cin >> n ;

    cout << "Enter Sum value: ";
    cin >> s;
    input ( arr, n);
    vector<vector<int>> ans = pairSum ( arr, s);

    for ( int i = 0; i < ans.size(); i++ ) {
        for ( int j = 0; j < ans[i].size(); j++ ) {
            cout << ans[i][j];
        }
    }
return 0;
}