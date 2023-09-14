#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> vect {10, 20, 100, 45, 500, 6};
    int res = *max_element(vect.begin(), vect.end());
    cout << res << " ";
    //end element is a special element which is after the last element.
}