// Fibonacci Series

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n;
cin>>n;
int a = 0, b = 1;
cout<<a<<endl<<b<<endl;
for (int i = 0; i<n; i++){
    int next = a+b;
    cout<<next<<endl;
    a = b; b = next;
}

return 0;
}
