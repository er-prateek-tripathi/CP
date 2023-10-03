/*This code will make the following pattern.
* * * *
* * * * 
* * * * 
* * * *
the dimension of square depends on the user.


The code provided is a simple C++ program to print a square pattern 
of stars. It works by using two nested while loops: the outer loop 
iterates over the rows of the pattern, and the inner loop iterates over 
the columns of the pattern. For each row, the inner loop prints a star
for each column, followed by a space. After the inner loop finishes, 
the outer loop prints a newline character to move to the next row.

*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    system("cls");
    int n;
    cout << "Enter the number of rows and columns the user wants to have: \n";
    cin >> n;
    cout <<endl;
    int i = 1;
    while ( i<=n ) {
        int j = 1;
        while ( j<=n ) { // row wise prining patterns
            cout << " * ";
            j += 1;
        }
        cout << endl; //changing lines
        i += 1; //proceding to next column.
    }

    
return 0;
}



