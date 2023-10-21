/*
n = 4
A
B B
C C C
D D D D

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n = 4;
int i = 1;
while (i<=n){
    int j = 1;
    char ch = 'A' + i - 1;
    while(j<=i){
        cout<<ch<<" ";
        j+=1;
    }
    cout<<endl;
    i+=1;
}

return 0;
}
