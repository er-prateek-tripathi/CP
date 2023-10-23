/*
Pattern: 
1 
2 3 
4 5 6
7 8 9 10
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int count = 1;
int n;
cin>>n;
int i = 1;
while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<count<<" ";
        count += 1;
        j += 1;
    }
    cout<<endl;
    i += 1;
}

return 0;
}
