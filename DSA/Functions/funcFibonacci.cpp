// A function to print nth term of fibonacci series.

#include<bits/stdc++.h>
using namespace std;

int FibSeries ( int n ) {
    int a = 0, b = 1, ans = 0;
    for (int i = 0; i<n; i++){
        int next = a+b;
        a = b; 
        b = next;
        ans = next;
        }
    
    return ans;
}

int main() {
    int n;
    cin>>n;
    cout<<FibSeries(n);
return 0;
}