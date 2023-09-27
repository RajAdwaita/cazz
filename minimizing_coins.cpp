#include <bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
// int ans = INT_MAX;
// void solve(int ind, int val, vector<int> &coins, int &c, vector<vector<int>> &dp)
// {
//     if (ind == 0)
//     {
//         int t = 0;
//         if (val % coins[0] == 0)
//         {
//             int x = val / coins[0];
//             t = x + c;
//             ans = min(ans, t);
//             dp[ind][val] = min(dp[ind][val], ans);
//         }
//         return;
//     }

//     if (val == 0)
//     {
//         ans = min(ans, c);
//         dp[ind][val] = min(dp[ind][val], ans);

//         return;
//     }
//     if (val < 0)
//     {
//         // return INT_MAX;
//         return;
//     }
//     if (dp[ind][val] != INT_MAX)
//     {
//         ans = min(dp[ind][val], ans);
//         return;
//     }

//     solve(ind - 1, val, coins, c, dp);
//     if (coins[ind] <= val)
//     {
//         c = c + 1;
//         solve(ind, val - coins[ind], coins, c, dp);
//         c = c - 1;
//     }

//     // c--;
// }
int solve(int x, vector<int> &coins, vector<int> &dp)
{
    if (x == 0)
        return 0;
    if (x < 0)
        return -1;
    if (dp[x] != -1)
    {
        return dp[x];
    }
    int ans = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int val = solve(x - coins[i], coins, dp);
        if (val != -1)
        {
            ans = min(ans, val + 1);
        }
    }
    if (ans == INT_MAX)
    {
        return dp[x] = -1;
    }
    return dp[x] = ans;

    // return dp[x] = ans == INT_MAX ? -1 : ans;
}
int main()
{

    int n, x;
    cin >> n >> x;
    vector<int> coins(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    // vector<vector<int>> dp(n + 1, vector<int>(x + 1, -1));
    // sort(begin(coins), end(coins));
    // int c = 0;
    // vector<vector<int>> dp(n + 1, vector<int>(x + 1, INT_MAX));
    vector<int> dp(x + 1, 0);
    dp[0] = 0;

    for (int j = 1; j <= x; j++)
    {
        int ans = INT_MAX;
        for (int i = 0; i < coins.size(); i++)
        {
            if (j - coins[i] < 0)
                continue;
            int val = dp[j - coins[i]];
            if (val != -1)
            {
                ans = min(ans, val + 1);
            }
        }
        if (ans == INT_MAX)
        {
            dp[j] = -1;
        }
        else
            dp[j] = ans;
    }
    // solve(n - 1, x, coins, c, dp);
    // cout << solve(x, coins, dp);
    // if (ans == INT_MAX)
    // {
    //     cout << -1 << endl;
    //     return 0;
    // }
    // cout << ans << endl;
    cout << dp[x] << endl;

    return 0;
}