// CBA Subsequence
// Givenastring,rearrange it in suchaway that it has no subsequence as cba.If there are multiple answers return the lexicographically smallest one.
// Example 1 : Input : N = 6 S = "aaaaab"
// Output : aaaaab
// Explanation : "aaaaab" has no subsequence as cba and is lexicographically the smallest one.
// Example 2 : Input : N = 3 S = "cba"
// Output : abc.
// Explanation : "abc" has no subsequence as cba and is lexicographically the smallest one.
// Your Task : You don't need to read input or print anything.
// Your task is to complete the function cbaSubsequence () which takes the string S,its sizeNas input parameters and returns the rearranged string.
// Expected Time Complexity : 0(NLogN)
//  Expected Auxiliary Space : 0(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    string cbaSubsequence(string s, int n)
    {
        int N = s.size();

        stack<char> res;

        for (int i = 0; i < N; ++i)
        {

            if (res.empty())
            {
                res.push(s[i]);
            }
            else
            {

                while ((!res.empty()) && (s[i] < res.top())

                       && (res.size() - 1 + N - i >= n))
                {
                    res.pop();
                }

                if (res.empty() || res.size() < n)
                {

                    res.push(s[i]);
                }
            }
        }

        string out;

        while (!res.empty())
        {
            out.push_back(res.top());
            res.pop();
        }

        reverse(out.begin(), out.end());

        // Print the string
        cout << out;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution a;
        cout << a.cbaSubsequence(s, n) << endl;
    }
    return 0;
}