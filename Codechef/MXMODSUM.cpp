#include <iostream>

#include <bits/stdc++.h>

typedef long long llt;

using namespace std;
int main()
{
    llt tc;
    cin >> tc;
    while (tc--)
    {
        llt N, posIntM, maxOF, smx;
        cin >> N >> posIntM;

        llt res[N];

        for (int i = 0; i < N; i++)
            cin >> res[i];

        maxOF = res[0];

        for (int i = 1, j; i < N; i++)
        {
            if (res[i] > maxOF)
                maxOF = res[i];
        }

        sort(res, res + N);

        for (int i = N - 1; i >= 0; i--)
        {
            if (res[i] < maxOF)
            {
                smx = res[i];
                break;
            }
        }

        cout << max(2 * maxOF, smx + maxOF + posIntM + (smx - maxOF) % posIntM) << endl;
    }
    return 0;
}
