/*
Pattern : 
1 1 1
2 2 2
3 3 3

if the row number is 1st then its contents are 1s.

value of nth row = column number of nth row
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls");
    int n;
    cout << "Enter the valuue of n: \n";
    cin >> n;

    int i = 1;

    while ( i <= n)
    {
        int j = 1; // use j = i for inverted left right triangle pattern.
        
        while ( j <= n )
        {
            cout << " " <<i<< " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    
return 0;
}
