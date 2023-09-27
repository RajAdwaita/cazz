#include <bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
int solve(int row, int col, vector<vector<char>> &grid, vector<vector<int>> &dp)
{
    if (row == 0 && col == 0)
    {
        return 1;
    }

    if (row < 0 || col < 0)
    {
        return 0;
    }

    if (dp[row][col] != -1)
    {
        return dp[row][col];
    }
    int up = 0;
    int left = 0;
    if (row > 0)
    {
        if (grid[row - 1][col] != '*')
        {
            up = solve(row - 1, col, grid, dp);
            up = up % M;
        }
    }
    if (col > 0)
    {
        if (grid[row][col - 1] != '*')
        {
            left = solve(row, col - 1, grid, dp);
            left = left % M;
        }
    }
    return dp[row][col] = (up + left) % M;
}
int main()
{

    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n, '.'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch;
            cin >> ch;
            grid[i][j] = ch;
        }
    }

    if (grid[0][0] == '*' || grid[n - 1][n - 1] == '*')
    {
        cout << 0 << endl;
        return 0;
    }
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

    cout << solve(n - 1, n - 1, grid, dp);

    return 0;
}