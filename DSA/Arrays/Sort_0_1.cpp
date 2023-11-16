// Problem Link: https://www.codingninjas.com/studio/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, input; 
    cin >> n;
    vector <int>  num;

    for (int i = 0; i<n; i++) {
        cin>>input;
        num.push_back(input);
    }
    sort(num.begin(), num.end());

    for (int i = 0; i<num.size(); i++) {
        cout<<num[i];
    }
return 0;
}