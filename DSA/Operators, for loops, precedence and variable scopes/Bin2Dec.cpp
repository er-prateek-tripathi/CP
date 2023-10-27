// Program to convert a Decimal Number into a Binary equivalent.

/*
Enter a Binary Number of your choice: 
101
Binary equivalent of 101 is 5

Enter a Binary Number of your choice: 
1111
Binary equivalent of 1111 is 15
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter a Binary Number of your choice: " << endl;
    cin >> num;

    int ans = 0;
    int i = 0;
    int n = num;
    while( n != 0 ) {
        int digit = n % 10;
        if( digit == 1 ) {
            ans = pow( 2, i ) + ans;
        }
        
        n = n/10;
        i++;
    } 
    cout << "Binary equivalent of " << num << " is " << ans << endl;
return 0;
}