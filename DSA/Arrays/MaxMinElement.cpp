/*
From the given array, give the maximum and the minimum element.

Pre-defined method "max" is used in the code.
This method takes two values, the default maximum variable
and the array.
Returns the maximum value of the array;

Same thing goes on with Pre-defined variable "min".


Example: 

5
5 8 10 2 1
 Maximum value is: 10
 Minimum value is: 1

*/

#include<bits/stdc++.h>
using namespace std;

int getMax (int num[], int n) {
    // int max = INT_MIN;
    int max_pre = INT_MIN;
    
    for ( int  i = 0; i < n; i++ ) {

        //Pre-defined method
        max_pre = max(max_pre, num[i]);

        // if (num[i] > max) {
        //     max = num[i];
        // }
    }

    return max_pre;
}

int getMin (int num[], int n) {
    // int min = INT_MAX;
    int min_pre = INT_MAX;
    for ( int  i = 0; i < n; i++ ) {
        // Pre-defined method
        min_pre = min(min_pre, num[i]);

        // if (num[i] < min) {
        //     min = num[i];
        // }
    }

    return min_pre;
}

int main() {
    int size;
    cin >> size;

    int num[100];

    for ( int i = 0; i < size; i++ ) {
        cin >> num[i];
    }

    cout << " Maximum value is: " << getMax( num, size ) << endl;
    cout << " Minimum value is: " << getMin( num, size ) << endl;
    

return 0;
}