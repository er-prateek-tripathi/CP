#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ar[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> ar[i];
        }

        if (ar[0] >= ar[2] && ar[0] <= ar[3])
            cout << ar[0];
        else if (ar[2] >= ar[0] && ar[2] <= ar[1])
            cout << ar[2];
        else
            cout << ar[0] + ar[2];

        cout << endl;
    }
}