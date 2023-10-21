/*
n = 3
A B C
D E F
G H I

*/
#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n = 3;
//cin>>n;
int i = 1;
char ch = 'A';
while(i<=n){
   int j = 1;
   while (j<=n){
    cout<<ch<<" ";
    ch += 1;
    j += 1;
   }
   cout<<endl;
   i += 1;

}

return 0;
}
