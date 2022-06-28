// Binary Modulo
// You are given a binary stringsand an integer m.You need to return an integerr.Where r = m % m, m is the binary equivalent of string s.
// Example 1 : 
// Input : s = 101 
// m = 2 
// Output : 1 
// Explanantion : Here m = 5 because(101) 2 = (5)18. 
// Hence 5mod 2 = 1. 
// Example 2 : Input : s = 1000 
// m = 4 
// Output : 0 
// Explanation : Here m = 8 and m = 4 hence r = m mod m  = 8 mod 4 = 0. 
// Your Task : You don't need to read input or print anything. Your task is to complete the function modulo() which takes the stringsand integer mas input parameters and returns the value of ras described above.Expected Time Complexity : 0(N)
// Expected Auxiliary Space : 0(N)

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int modulo(string s, int m){
            // int val = stoi(s);
            // int dec_val = 0;

            // int base = 1;
            // int temp = stoi(s,0,2);
            // while(temp){
            //     int last_digit = temp % 10;
            //     temp /= 10;
            //     dec_val += last_digit * base;
            //     base *= 2;
            // }

            // return dec_val % m;
            int n = s.length();
            int ar[n];
            ar[0] = 1 % m;
            for (int i = 1; i < n; i++)
            {
                ar[i] = ar[i - 1] * (2 % m);
                ar[i] %= m;
            }

            // To store the result
            int res = 0;
            int i = 0, j = n - 1;
            while (i < n)
            {

                // If current bit is 1
                if (s[j] == '1')
                {

                    // Add the current power of 2
                    res += (ar[i]);
                    res %= m;
                }
                i++;
                j--;
            }
            return res;
        }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int m;
        cin>>s>>m;
        Solution a;
        cout<<a.modulo(s,m)<<endl;
    }
    return 0;
}