/*
n = 4
A
B C
C D E
D E F G
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n = 4;
int i = 1;
char value;
while(i<=n){
    int j = 1; value = 'A' + i - 1;
    while(j<=i){
        cout<<value<<" ";
        value += 1;
        j += 1;
    }
    cout<<endl;
    i += 1;
}

return 0;
}
