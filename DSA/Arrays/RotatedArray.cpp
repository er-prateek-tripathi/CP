// Searching in a rotated and sorted array

#include<bits/stdc++.h>
using namespace std;

int getPivot( vector<int>& arr, int n ) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;

    while(s < e) {
        if (arr[mid] > arr[0]) {
            s = mid + 1;
        }

        else {
            e = mid;
        }

        mid = s + (e - s)/2;
    }
    return s;
}

int binarySearch( vector<int>& arr, int s, int e, int key ) {

    int start = s; 
    int end = e;

    // int mid = ( start + end ) / 2;
    // optimized formula: 
    int mid = start + (( end - start ) / 2); 

    while ( start <= end) {

        if ( arr[mid] == key ) {
            return mid;
        }

        // going to right part of array
        if ( key > arr[mid] ) {
            start = mid + 1;
        }
        // going to left part of array
        else { // key < arr[mid];
            end = mid - 1;
        }

        //mid = ( start + end ) / 2;
        mid = start + (( end - start ) / 2);

    }

    return -1;

}

int findPosition( vector<int>& arr, int n, int k ) {
    int pivot = getPivot(arr, n);
    if ( k >= arr[pivot] && k <= arr[n-1] ) {
        return binarySearch( arr, pivot, n-1, k );
    }

    else {
        return binarySearch( arr, 0, pivot - 1, k );
    }
}

int findPosition2( vector<int>& arr, int n, int k) {
    int start=0;

    int end=n-1;

    while(start<=end){

 

        int mid=(start+end)/2;

        if(arr[mid]==k){

            return mid;

        }

        if(arr[start]<=arr[mid]){

            

            if(arr[start]<=k && k<=arr[mid]){

                end=mid-1;

            }

            else {

                start=mid+1;

            }

        }

        else{

 

            if(arr[mid]<=k && k<=arr[end]){

                start=mid+1;

            }

            else{

                end=mid-1;

            }

        }

    }

    return -1;
}


int main() {

return 0;
}