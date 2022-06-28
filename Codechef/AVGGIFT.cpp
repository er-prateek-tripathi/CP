#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int sizeOfSet, meanOfArray;

        cin>>sizeOfSet>>meanOfArray;

        int mySet[sizeOfSet];

        for(int i = 0; i< sizeOfSet; i++)
        cin>>mySet[i];

        int ct = 0;

        for(int i = 0; i< sizeOfSet; i++)
            ct = ct+mySet[i];

        if(ct/sizeOfSet == meanOfArray) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
    }


    return 0;
}
