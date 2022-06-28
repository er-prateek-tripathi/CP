#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--){
        int n,q;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++)
            cin>>arr[i];
        
        int newArr[n+1][33];
        for(int i = 0; i<= n; i++){
            int temp = arr[i-1];
            for(int j = 0; j<33; j++)
                newArr[i][j] = newArr[i-1][j];
            
            int powerr = 32;
            if(temp != 0) powerr = (int)(log10(temp)/log10(2));
            newArr[i][powerr] ++;
        }
        cin>>q;
        for(int i = 0; i<q; i++){
            int ss, ee, x;
            cin>>ss>>ee>>x;
            int count = 0;
            int powerrr = 32;
            if(x != 0) powerrr = (int)(log10(x)/log10(2));
            count = newArr[ee][powerrr] - newArr[ss - 1][powerrr];
            int res = (ee - ss + 1) - count;
            cout<<res<<endl;
        }
    }
    return 0;
}
