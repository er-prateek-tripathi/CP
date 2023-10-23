#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, sum = 0, i = 2;

    cout << "Enter the Number: "; 
    cin >> num;

    while (i <= num)
    {
        if (i%2 == 0) {
            sum += i;
        }
        i++;
    }
    cout << "Sum: "<< sum;

return 0;
}
