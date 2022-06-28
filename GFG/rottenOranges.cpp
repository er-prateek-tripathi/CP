// Rotten Oranges

// Givenagrid of dimension nxm where each cell in the grid can have values 0,1or2which has the following meaning:
// 0: Empty cell
// 1: Cells have fresh oranges
// 2: Cells have rotten oranges
// We have to determine what is the minimum time required to rot all oranges.Arotten orange at index [i,j] can rot
// other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], lij+1] (up, down, left and right) in unit time.
// Example 1:
//  Input: grid={{0,1,2},{0,1,2},{2,1,1}}
// Output:1
//  Explanation: The grid is-
//  0 1 2
//  0 1 2
//  2 1 1
// Oranges at positions (0,2), (1,2), (2,0)
// will rot oranges at (0,1), (1,1), (2,2) and (2,1) in unit time.

// Example 2 :
// Input : grid = {{2, 2, 0, 1}}
// Output : -1
// Explanation : The grid is - 2 2 0 1 Oranges at(0, 0) and ( 0, 1) can't rot orange at (0, 3).
// Your Task : You don't need to read or print anything, Your task is to complete the function orangesRotting () which takes grid as input parameter and returns the minimum time to rot all the fresh oranges.
// If not possible returns - 1.
// Expected Time Complexity : 0(n * m)
// Expected Auxiliary Space : 0(n)

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isSafe(vector<vector<int>> &grid, int i, int j)
    {
        int n = grid.size();
        int m = grid[0].size();
        return (i >= 0 && j >= 0 && i < n && j < m);
    }
    // Function to find minimum time required to rot all oranges.
    int orangesRotting(vector<vector<int>> &grid)
    {
        // Code here
        int days = 2;
        bool flag = false;
        int n = grid.size();
        int m = grid[0].size();
        while (1)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (grid[i][j] == days)
                    {
                        if (isSafe(grid, i + 1, j) && grid[i + 1][j] == 1)
                        {
                            grid[i + 1][j] = grid[i][j] + 1;
                            flag = true;
                        }
                        if (isSafe(grid, i, j + 1) && grid[i][j + 1] == 1)
                        {
                            grid[i][j + 1] = grid[i][j] + 1;
                            flag = true;
                        }
                        if (isSafe(grid, i - 1, j) && grid[i - 1][j] == 1)
                        {
                            grid[i - 1][j] = grid[i][j] + 1;
                            flag = true;
                        }
                        if (isSafe(grid, i, j - 1) && grid[i][j - 1] == 1)
                        {
                            grid[i][j - 1] = grid[i][j] + 1;
                            flag = true;
                        }
                    }
                }
            }
            if (flag == false)
            {
                break;
            }
            flag = false;
            days++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    days = -1;
                }
            }
        }
        return days == -1 ? days : days - 2;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m - 1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];
        }
        Solution obj;
        int ans = obj.orangesRotting(grid);
        cout << ans << endl;
    }
    return 0;
}
