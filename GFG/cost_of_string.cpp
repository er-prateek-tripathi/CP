#include <iostream>
#include<string.h>
#include<regex>
using namespace std;

// Function to check if the string contains only special characters.
bool onlySpecialCharacters(string str)
{

    // Regex to check if the string contains only special characters.
    const regex pattern("[a-zA-Z0-9]+");
    if (regex_match(str, pattern))
    {
        return true;
    }
}

int main()
{
    // code
    int t;
    cin >> t;
    while (t--){
        int cost = 0;
        string str;
        cin>>str;
        for (int i = 0; i<=str.size(); i++) {
            if (str[i] == 'A' || str[i] == 'E' ||
                str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                    cost = cost + 1;
                }
            else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                cost = cost + 2;
            }
            else if (onlySpecialCharacters(str) == 1) cost = cost+3;
                
        }
        cout<<cost<<"\n";
    }
    return 0;
}

// if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
//     cout << " Alphabet ";

// // CHECKING FOR DIGITS
// else if (str[i] >= 48 && str[i] <= 57)
//     cout << " Digit ";

// // OTHERWISE SPECIAL CHARACTER
// else
//     cout << " Special Character ";