#include <vector>
#include<iostream>

using namespace std;

int main()
{
    vector <int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);

    //for (int i = 0; i< vect.size(); i++) ......... approact 1
        //cout<<vect[i]<<" ";
    for (auto x: vect)          //..............approach 2
        cout << x << " " ;
}