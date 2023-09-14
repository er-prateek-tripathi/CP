#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v{10,20,30,40};
    for (auto &x: v)
        x += 5;
    
    for (auto x: v)
        cout<<x<<" ";
}