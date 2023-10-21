/*
1 2 3
4 5 6
7 8 9
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n = 3;
int i = 1, count = 1;
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<count<<" ";
        count+=1;
        j+=1;
    }
    cout<<endl;
    i+=1;
}

return 0;
}
