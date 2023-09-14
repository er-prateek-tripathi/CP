#include <iostream>
#include <numeric>
using namespace std;
int main()
{
    int arr[]{10, 20, 100, 45, 500, 6};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i<n; i++) { //...finding sum via loop
    //     sum = arr[i] + sum;
    // }
    sum = accumulate(arr,arr+n,sum); //Finding sum via accumulate function. (Same can be done with vectors also.)
    cout << sum << " ";
}