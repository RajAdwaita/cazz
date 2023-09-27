#include <bits/stdc++.h>
using namespace std;

bool solve(int a, int b, vector<vector<int>> &dp)
{
    if (a == 0 && b == 0)
    {
        return true;
    }
    if (a <= 0 || b <= 0)
    {
        return false;
    }
    if (dp[a][b] != -1)
    {
        return dp[a][b];
    }

    return dp[a][b] = solve(a - 1, b - 2, dp) || solve(a - 2, b - 1, dp);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        // if (a == 0 && b == 0)
        // {
        //     cout << "YES" << endl;
        // }
        // if ((a > 2 && b < 2) || (b > 2 && a < 2))
        // {
        //     cout << "NO" << endl;
        // }
        // if (a < 2 && b < 2)
        // {
        //     cout << "NO" << endl;
        // }
        // if (a == 0 || b == 0)
        // {
        //     cout << "NO" << '\n';
        // }
        // if (a % 2 == 0 && b % 2 == 0)
        // {
        //     cout << "NO" << '\n';
        // }
        // else
        // {
        //     cout << "YES" << '\n';
        // }
        // int minn = INT_MAX;
        // if (a <= b)
        // {
        //     if (b > 2 * a)
        //     {
        //         cout << "NO" << endl;
        //     }
        //     else
        //     {
        //         cout << "YES" << endl;
        //     }
        // }
        // else if (b < a)
        // {
        //     if (2 * b < a)
        //     {
        //         cout << "NO" << endl;
        //     }
        //     else
        //     {
        //         cout << "YES" << endl;
        //     }
        // }
        // cout << "N";
        // vector<vector<int>> dp(a + 1, vector<int>(b + 1, -1));
        // if (solve(a, b, dp))
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << '\n';
        if (b > a)
        {
            swap(b, a);
        }
        if (a > 2 * b || (a + b) % 3 != 0)
        {
            cout << "NO" << '\n';
        }

        else
        {
            cout << "YES" << '\n';
        }
    }

    return 0;
}