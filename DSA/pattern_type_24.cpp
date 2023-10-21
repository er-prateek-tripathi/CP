/*
A B C D
E F G H
I J K L
M N O P
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n = 4, i = 1;
char ch = 'A';
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<ch<<" ";
        ch+=1;
        j+=1;
    }
    cout<<endl;
    i+=1;
}

return 0;
}