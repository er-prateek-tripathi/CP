// Problem Link: https://www.codingninjas.com/studio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1

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

vector<vector<int>> tripletSum ( vector <int> &arr, int n, int K ) {
    vector<vector<int>> ans;
    
    // This loop is comparing value at i to all the values after i.
    for (int i = 0; i < arr.size(); i++) {
        for ( int j = i + 1; j < arr.size(); j++) {
            for (int l = j+1; l < arr.size(); l++) {
                if ( arr[i] + arr[j] + arr[l] == K) {
                    vector <int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[l]);
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {

    vector <int> arr;
    int n, K;
 
    cout << "No. of elements: ";
    cin >> n ;

    cout << "Enter Sum value: ";
    cin >> K;
    input ( arr, n);
    vector<vector<int>> ans = tripletSum ( arr, n, K);

    for ( int i = 0; i < ans.size(); i++ ) {
        for ( int j = 0; j < ans[i].size(); j++ ) {
            cout << ans[i][j];
        }
    }
return 0;
}