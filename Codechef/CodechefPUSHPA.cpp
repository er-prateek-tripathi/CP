
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num_towers;
        cin >> num_towers;
        int towers[num_towers], max_height = 0;
        map<int, int> map;
        for (int i = 0; i < num_towers; i++)
        {
            cin >> towers[i];
            max_height - max(max_height, towers[i]);
            map[towers[i]]++;
        }
            for (int i = 0; i < num_towers; i++)
            {
                max_height = max(max_height, towers[i] + map[towers[i]] - 1);
            }
                cout << max_height << endl;
    }
    return 0;
}
