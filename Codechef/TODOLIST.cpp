#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int arr[num]; // arr[10];
        int cnt = 0;
        for (int i = 0; i < num; i++) //i = i+1
            cin >> arr[i];

        for (int i = 0; i < num; i++)
        {                         
            if (arr[i] >= 1000)  
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
