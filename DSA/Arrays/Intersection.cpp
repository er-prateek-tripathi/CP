// Following program will find the intersection of two arrays.

#include<bits/stdc++.h>
using namespace std;

void input (vector <int> &arr, vector <int> &arr1, int n, int m) {

    cout << "Enter the elements for the First Array: " << endl;
    int input;
    for ( int i = 0; i < n; i++ ){
        cin >> input;
        arr.push_back(input);
    }

    cout << "Enter the elements for the Second Array: " << endl;
    int input1;
    for ( int i = 0; i < m; i++ ){
        cin >> input1;
        arr1.push_back(input1);
    }


}

vector <int> Intersection ( vector <int> &arr, vector <int> &arr1, int n, int m) {
    sort(arr.begin(), arr.end());
    sort(arr1.begin(), arr1.end());

    vector <int> ans;

    for ( int i = 0; i < n; i++ ) {
        int ele = arr[i];

        for ( int j = 0; j < m; j++ ) {
            if ( ele == arr1[j] ) {
                ans.push_back(ele);
                arr1[j] = -1;
                break;
            }
        }
    }
    return ans;
}

int main() {

    vector <int> arr;
    vector <int> arr1;
    int n, m;
 
    cout << "No. of elements: ";
    cin >> n >> m;

    input ( arr, arr1, n, m );
    vector <int> ans = Intersection ( arr, arr1, n, m );

    for (int i: ans) {
        cout << i;
    }
return 0;
}