#include <bits/stdc++.h>
using namespace std;

int nonIncreasingArray(int A[], int n)
{
    int ans = 0;
    priority_queue<int> itr;

    for (int i = n - 1; i >= 0; i--)
    {
        if (!itr.empty() and itr.top() > A[i])
        {
            ans += abs(A[i] - itr.top());
            itr.pop();
            itr.push(A[i]);
        }
        itr.push(A[i]);
    }
    return ans;
}

int main(){
    int numDishes, numPanCakes;
    cin>>numDishes>>numPanCakes;

    int Arr[numDishes];

    for (int i = 0; i<numDishes; i++)
        cin>>Arr[i];
    int n = numPanCakes/sizeof(Arr[0]);
    cout<<nonIncreasingArray(Arr, n);



    return 0;
}