/*
n = 4
D
C D
B C D
A B C D
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n=4;
int i= 1 ;
while (i<=n) {
    int j = 1;
    char ch = 'A' + n - i;
    while(j<=i) {
        cout<<ch<<" ";
        ch+=1;
        j += 1;
    }
    cout<<endl;
    i += 1;
}

return 0;
}
