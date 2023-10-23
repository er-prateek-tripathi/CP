// The task is to find factorial of a given number;

#include<bits/stdc++.h>

using namespace std;

int main() {
    int fact = 1, num;
    cin>>num;

    for(int i = 1; i<=num; i++) {
        fact *= i;
    }

    cout<<fact;
}