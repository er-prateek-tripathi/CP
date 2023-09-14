// Input a number and the code will find whether its a prime number or not.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, flag = 1;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            flag = 0;
        }
    }

    if (flag)
        cout<<"Prime Number";
    else cout<<"Non-Prime Number";
}