#include<bits/stdc++.h>
using namespace std;

int main() {
    float temp, FT, CT;
    char type;
    
    cout << "\nWhat sort of Temperature wouuld you like to convert? F or C? \n";
    cin >> type;

    cout << "\nEnter the Temperature Value: \n";
    cin >> temp;

    if (type == 'C') {
        CT = temp;
        cout << "\nWe are converting Celsius Value into Fahrenheit.\n";
        FT = (1.8*CT) + 32;
        cout << "\nTurns out "<<CT<<" Degree Celcius equals "<<round(FT)<<" Degree Fahrenheit.";
    }
    else {
        FT = temp;
        cout << "\n We are Converting Fahrenheit value into Celsius.\n";
        CT = (FT-32)*0.56;
        cout << "\n Turns out "<<FT<<" Degree Fahrenheit equals "<<round(CT)<<" Degree Celsius.";
    }


return 0;
}
