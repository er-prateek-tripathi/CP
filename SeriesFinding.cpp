// #include<bits/stdc++.h>
// using namespace std;
// int getNextSeriesElement(int lengthOfArray, int Array[]) {

// }
// bool isPerfectSquare(int ArrayLastElement)
// {
//     int s = sqrt(ArrayLastElement);
//     return (s * s == ArrayLastElement);
// }

// Returns true if ArrayLastElement is a Fibonacci Number, else false
// bool checkIsFibonacci(int ArrayLastElement)
// {
// ArrayLastElement is Fibonacci if one of 5*ArrayLastElement*ArrayLastElement + 4 or 5*ArrayLastElement*ArrayLastElement - 4 or
// both is a perfect square
//    return isPerfectSquare(5 * ArrayLastElement * ArrayLastElement + 4) || isPerfectSquare(5 * ArrayLastElement * ArrayLastElement - 4);
// }

// bool isArithmatic( int Array[])
// {
//     int delta  = Array[1] - Array[0];
//     int lengthOfArray = sizeof(Array)/sizeof(Array[0]);
//         for (int i = 0; i < lengthOfArray; i++)
//     {
//         if(Array[i+1] - Array[i] != delta) {
//             return true;
//         }
//         else false;
//     }
// }
// int main()
// {
//     int LengthOFArray;
//     cin>>LengthOFArray;

//     int Array[LengthOFArray];

//     for(int i = 0; i<LengthOFArray; i++){
//         cin>>Array[i];
//     }

//     if(checkIsFibonacci(Array[LengthOFArray-1])) {
//         double a = Array[LengthOFArray - 1] * (1 + sqrt(5)) / 2.0;
//         cout<<a;
//     }

//     if(isArithmatic(&Array[LengthOFArray-1])) {
//         int delta = Array[1] - Array[0];
//         double a = Array[LengthOFArray-1] + delta;
//         cout<<a;
//     }

// }

#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int ArrayLastElement)
{
    int s = sqrt(ArrayLastElement);
    return (s * s == ArrayLastElement);
}

// Returns true if ArrayLastElement is a Fibonacci Number, else false
bool checkIsFibonacci(int ArrayLastElement)
{
    // ArrayLastElement is Fibonacci if one of 5*ArrayLastElement*ArrayLastElement + 4 or 5*ArrayLastElement*ArrayLastElement - 4 or both is a perfect square
    return isPerfectSquare(5 * ArrayLastElement * ArrayLastElement + 4) || isPerfectSquare(5 * ArrayLastElement * ArrayLastElement - 4);
}
// Returns true if arr[0..n-1]
// can form AP
bool checkIsAP(double arr[], int n)
{
    // Base Case
    if (n == 1)
        return true;

    // Sort array
    sort(arr, arr + n);

    // After sorting, difference
    // between consecutive elements
    // must be same.
    double d = arr[1] - arr[0];

    // Traverse the given array and
    // check if the difference
    // between ith element and (i-1)th
    // element is same or not
    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] != d)
        {
            return false;
        }
    }

    return true;
}

// Returns true if arr[0..n-1]
// can form GP
bool checkIsGP(double arr[], int n)
{
    // Base Case
    if (n == 1)
        return true;

    // Sort array
    sort(arr, arr + n);

    // After sorting, common ratio
    // between consecutive elements
    // must be same.
    double r = arr[1] / arr[0];

    // Traverse the given array and
    // check if the common ratio
    // between ith element and (i-1)th
    // element is same or not
    for (int i = 2; i < n; i++)
    {
        if (arr[i] / arr[i - 1] != r)
            return false;
    }

    return true;
}

// Returns true if arr[0..n-1]
// can form HP
bool checkIsHP(double arr[], int n)
{
    // Base Case
    if (n == 1)
    {
        return true;
    }

    double rec[n];

    // Find reciprocal of arr[]
    for (int i = 0; i < n; i++)
    {
        rec[i] = ((1 / arr[i]));
    }

    // After finding reciprocal, check if
    // the reciprocal is in A. P.
    // To check for A.P.
    if (checkIsAP(rec, n))
        return true;
    else
        return false;
}

// Driver's Code
int main()
{
    int l;
    cin >> l;

    double arr[l];

    for (int i = 0; i < l; i++)
        cin >> arr[i];
    int n = sizeof(arr) / sizeof(arr[0]);
    int flag = 0;

    if (checkIsFibonacci(arr[n - 1]))
    {
        double a = arr[n - 1] * (1 + sqrt(5)) / 2.0;
        cout << a << endl;
        flag = 1;
    }

    // Function to check AP
    if (checkIsAP(arr, n))
    {
        int delta = arr[1] - arr[0];
        double a = arr[n - 1] + delta;
        cout << a << endl;
        flag = 1;
    }

    // Function to check GP
    if (checkIsGP(arr, n))
    {
        int r = arr[1] / arr[0];
        int a = arr[0] * (int)(pow(r, n - 1));
        cout << a << endl;
        flag = 1;
    }

    // Function to check HP
    if (checkIsHP(arr, n))
    {
        float delta =
            double a = 1 / (arr[0] + (n - 1) * delta);
        flag = 1;
    }

    else if (flag == 0)
    {
        cout << "No";
    }

    return 0;
}