#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int initialCheckpoint, finalCheckpoint, totalCheckpoints;
        cin >> initialCheckpoint >> finalCheckpoint >> totalCheckpoints;
        
        int diff1 = initialCheckpoint - finalCheckpoint;
        int diff2 = finalCheckpoint - initialCheckpoint;
        int diff3 = totalCheckpoints - initialCheckpoint + finalCheckpoint;
        int diff4 = initialCheckpoint + totalCheckpoints - finalCheckpoint;

        if (initialCheckpoint > finalCheckpoint)
        {
            cout<<min(diff1, diff3);
        }

        else {
            cout<<min(diff2, diff4);
        }

        cout<<endl;
    }
    return 0;
}
