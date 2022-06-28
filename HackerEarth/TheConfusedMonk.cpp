#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Function to find gcd of array of
// numbers
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}

int multiply(int array[], int n)
{
    int pro = 1;
    for (int i = 0; i < n; i++)
        pro = pro * array[i];
    return pro;
}

int main()
{
    int num;
    cin >> num;
    int ar[num]; // Reading input from STDIN
    for (int i = 0; i < num; i++)
        cin >> ar[i];

    int gc_d = findGCD(ar, num);

    int mul = multiply(ar, num);

    int final_res = pow(mul, gc_d);

    cout << final_res;

    return 0;

    // Writing output to STDOUT
}