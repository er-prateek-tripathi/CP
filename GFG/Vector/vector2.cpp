#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    vector<int> vect{ 10, 20, 30, 40, 50}; // creating a vector array
    for (auto x : vect)
        cout << x << " ";

// Vector array of some other data type => vector<data_type> vect;
}