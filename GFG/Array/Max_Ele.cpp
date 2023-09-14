#include<iostream>
#include<algorithm>
using namespace std;
int main() 
{
    int arr[] { 10, 20, 100, 45, 500, 6 };
    int n = sizeof(arr)/ sizeof(arr[0]);
    int* res;
    res = max_element(arr,arr+n);
    cout<<*res<< " ";

}