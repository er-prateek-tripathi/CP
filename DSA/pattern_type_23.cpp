/*
A B C D
A B C D
A B C D
A B C D
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n = 4, i = 1;
while(i<=n){
    int j = 1;
    while(j<=n){
        char ch = 'A' + j - 1;
        cout<<ch<<" ";
        j+=1;
    }
    cout<<endl;
    i+=1;
}

return 0;
}
