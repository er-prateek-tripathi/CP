#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr1[] = {10, 20, 100, 45, 500, 6};
    int arr2[3][2] = {
        {1,2},
        {2,3},
        {3,4}};    
    for( int i = 0; i<3; i++ ) {
        for( int j = 0; j<2; j++) {
            cout<<arr2[i][j]<< " ";
        }
    }
}