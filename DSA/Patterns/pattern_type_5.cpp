/* 
n = 4
A B C D
B C D E
C D E F
D E F G

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n = 4;
int i = 1; 
while (i<=n){
    int j = 1;
    char ch = 'A' + i + j - 2;
    while(j<=n){
        cout<<ch<<" ";
        ch += 1;
        j+=1;
    }
    cout<<endl;
    i+=1;
}

return 0;
}
