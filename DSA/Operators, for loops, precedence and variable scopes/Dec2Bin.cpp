// Program to convert a Decimal Number into a Binary equivalent.

/*
Enter a Decimal Number of your choice:
5
Decimal equivalent of 5 is 101

Enter a Decimal Number of your choice:
25
Decimal equivalent of 25 is 11001

Enter a Decimal Number of your choice:
22
Decimal equivalent of 22 is 10110

Enter a Decimal Number of your choice:
26
Decimal equivalent of 26 is 11010
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter a Decimal Number of your choice: " << endl;
    cin >> num;

    int ans = 0;
    int i = 0;
    int n = num;
    while( n != 0 ) {
        int bit = n & 1;
        ans = ( bit * pow( 10, i ) ) + ans;
        n = n >> 1;
        i++;
    } 
    cout << "Decimal equivalent of " << num << " is " << ans << endl;
return 0;
}