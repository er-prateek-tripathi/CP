
#include <iostream>
using namespace std;
int countCon(int arr[], int n)
{
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] + 1 == arr[i + 1])
        {
            cnt++;
        }
    }

    return cnt;
}

int main()

{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];

        int n = sizeof(arr) / sizeof(arr[0]);
        cout << countCon(arr, n) << endl;
    }

    return 0;
}
