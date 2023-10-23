//The task is to print all the even numbers from 1 to n.

#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;

    cout<<endl<<"Enter the value of n."<<endl;

    cin>>n;

    for(int i = 1; i<=n; i++) {
        if (i%2 == 0)
            cout<<i<<endl;
    }
    
    return 0;
}