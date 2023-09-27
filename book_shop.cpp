#include <bits/stdc++.h>
using namespace std;

int solve(int ind, int x, vector<int> &h, vector<int> &s, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        if (h[0] <= x)
        {
            return s[0];
        }
        return 0;
    }
    if (dp[ind][x] != -1)
    {
        return dp[ind][x];
    }

    int take = INT_MIN;
    int notTake = solve(ind - 1, x, h, s, dp);
    if (h[ind] <= x)
    {
        take = s[ind] + solve(ind - 1, x - h[ind], h, s, dp);
    }
    return dp[ind][x] = max(take, notTake);
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    int n, x;
    cin >> n >> x;
    vector<int> h(n, 0);
    vector<int> s(n, 0);
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = h[0]; i <= x; i++)
    {
        if (h[0] <= x)
        {
            dp[0][i] = s[0];
        }
    }

    for (int ind = 1; ind < n; ind++)
    {
        for (int xx = 0; xx <= x; xx++)
        {
            int take = INT_MIN;
            int notTake = dp[ind - 1][xx];
            if (h[ind] <= xx)
            {
                take = s[ind] + dp[ind - 1][xx - h[ind]];
            }
            dp[ind][xx] = max(take, notTake);
        }
    }

    cout << dp[n - 1][x];
    // cout << solve(n - 1, x, h, s, dp) << endl;
    // }

    return 0;
}