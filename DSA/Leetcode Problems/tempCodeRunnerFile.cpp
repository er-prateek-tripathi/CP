#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n;
cin >> n;

int value;
int prod = 1;
int sum = 0;
int difference;

while(n){
    value = n%10;
    prod *= value;
    sum += value;
    n = n/10;
}

difference = prod > sum ? prod - sum : sum - prod;

cout<<difference;

return 0;
}
