/*
1
23
456
78910
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n = 4, count = 1, i = 1;
while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<count;
        count+=1;
        j+=1;
    }
    cout<<endl;
    i+=1;
}

return 0;
}
