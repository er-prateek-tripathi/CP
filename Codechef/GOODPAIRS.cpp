#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int goodPairs = 0;
        long long int lengthArr;
        
        cin >> lengthArr;
        
        if (lengthArr >= 2)
        {
            int ArrA[lengthArr], ArrB[lengthArr];

            for (int i = 0; i < lengthArr; i++)
                cin >> ArrA[i];

            for (int i = 0; i < lengthArr; i++)
                cin >> ArrB[i];

            for (int i = 0; i < lengthArr; i++)
            {
                for (int j = 0; j < lengthArr; j++)
                {
                    if (i < j)
                    {
                        if (ArrA[i] == ArrB[j] && ArrA[j] == ArrB[i])
                            goodPairs += 1;
                    }
                }
            }
            cout << goodPairs << endl;
        }
    }

    return 0;
}