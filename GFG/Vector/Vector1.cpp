#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n = 10;

    vector<int> vect(n,5); //creating a vector array with 10 times 5 in it.
    for (auto x: vect)
        cout << x << " ";
}