// Checking whether the number fed is prime or not.

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n;
cin>>n;
bool isPrime = 1;
for(int i = 2; i<n; i++){
    if (i%n == 0) isPrime = 0;
}
if(isPrime) cout<<"The number is a Prime No.";
else cout<<"The number is not a prime number.";

return 0;
}
