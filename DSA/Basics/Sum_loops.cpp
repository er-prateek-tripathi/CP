// The task is to find the sum of a list of number using loops.

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0;
    
    cout<<"Enter the value of n."<<endl;
    cin>>n;

    for(int i = 0; i<=n; i++) {
        sum += i;
    }

    cout<<endl<<"Sum = "<<sum;
}