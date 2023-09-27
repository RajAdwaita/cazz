#include <bits/stdc++.h>
using namespace std;
long long int M = 1e9 + 7;
long long solve(long long n, vector<long long> &dp)
{
    if (n < 0)
        return 0;
    if (n == 0)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    // if (ind == 1)
    // {
    //     return (n % 1 == 0);
    // }

    // long long  take = 0;
    // long long  notTake = solve(ind - 1, n);
    // if (ind <= n)
    // {
    //     take = solve(ind, n - ind);
    // }
    // return take + notTake;
    long long ans = 0;
    for (long long i = 1; i <= 6; i++)
    {
        ans += solve(n - i, dp) % M;
    }
    return dp[n] = ans % M;
}
int main()
{
    long long n;
    cin >> n;
    // vector<long long > cube = {1, 2, 3, 4, 5, 6};
    vector<long long> dp(n + 1, -1);
    // long long  x = solve(n, dp);
    // long long  x = solve(5, n, cube);
    cout << solve(n, dp) << endl;

    return 0;
}