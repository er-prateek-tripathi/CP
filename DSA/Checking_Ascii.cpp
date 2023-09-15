/*
In this program, The user will input something from key board.
The program is supposed to tell about the identity of the input.
like what sort of thing it is.

ASCII Range
A-Z = 65-90
a-z = 97-122
0-9 = 48-57
rest = special character
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    char input;

    cout << "Enter any ONE character of your Choice: " << endl;
    cin >> input;

    if (input >= 'a' && input <= 'z') {
        cout << "Lower Case Alphabet";
    }
    else if (input >= 'A' && input <= 'Z') {
        cout << "Upper Case Alphabet";
    }
    else if (input >= '0' && input <= '9') {
        cout << "Numeric Value between 0 and 9";
    }
    else {
        cout << "Special Character";
    }
}