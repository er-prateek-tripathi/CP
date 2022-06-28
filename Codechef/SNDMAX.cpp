#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        cout << a[1] << endl;
    }
    return 0;
}
