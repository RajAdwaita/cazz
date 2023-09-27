// #include <bits/stdc++.h>
// using namespace std;

// int M = 1e9 + 7;

// int solve(int ind, int x, vector<int> &coins, vector<vector<int>> &dp)
// {
//     if (x == 0)
//     {
//         return 1;
//     }
//     if (x < 0)
//         return 0;
//     if (ind == 0)
//         return (x % coins[0] == 0);
//     if (dp[ind][x] != -1)
//         return dp[ind][x];

//     int take = 0;
//     int notTake = solve(ind - 1, x, coins, dp) % M;
//     if (coins[ind] <= x)
//     {
//         take = solve(ind, x - coins[ind], coins, dp) % M;
//     }
//     return dp[ind][x] = (take + notTake) % M;
// }

// int main()
// {
//     int n, x;
//     cin >> n >> x;

//     vector<int> coins(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> coins[i];
//     }

//     vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
//     vector<int> prev(x + 1, 0);
//     for (int i = 0; i <= x; i++)
//     {
//         prev[i] = (i % coins[0] == 0);
//     }
//     for (int i = 0; i <= n; i++)
//     {
//         dp[i][0] = 1;
//     }

//     for (int ind = 1; ind < n; ind++)
//     {
//         vector<int> curr(x + 1, 0);

//         for (int xx = 0; xx <= x; xx++)
//         {
//             int take = 0;
//             int notTake = prev[xx] % M;
//             if (coins[ind] <= xx)
//             {
//                 take = curr[xx - coins[ind]] % M;
//             }
//             curr[xx] = (take + notTake) % M;
//         }
//         prev = curr;
//     }

//     cout << prev[x]; // cout << solve(n - 1, x, a, dp);

//     return 0;
// }

// OPTIMAL SOLUTION O CHOLE NI ... TAI ETA JHEPE DILAM

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int, int>;
#define f first
#define s second
#define mp make_pair
void setIO(string name = "")
{ // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0); // see Fast Input & Output
    if (sz(name))
    {
        freopen((name + ".in").c_str(), "r", stdin); // see Input & Output
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

ll dp[1000001];

const int MOD = (int)1e9 + 7;

int main()
{
    int n, x;
    cin >> n >> x;
    vi coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int weight = 0; weight <= x; weight++)
        {
            if (weight - coins[i - 1] >= 0)
            { // prevent out of bounds cases
                dp[weight] += dp[weight - coins[i - 1]];
                dp[weight] %= MOD;
            }
        }
    }
    cout << dp[x] << '\n';
}