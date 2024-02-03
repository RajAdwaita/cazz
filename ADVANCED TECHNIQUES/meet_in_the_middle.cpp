

#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long int
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int calc(int ind, int x, vector<ll> &arr, vector<vector<ll>> &dp)
{
    // if (x == 0)
    //     return 1;
    if (ind == arr.size())
    {
        if (x == 0)
            return 1;
        return 0;
    }
    if (x < 0)
        return 0;
    if (dp[ind][x] != -1)
        return dp[ind][x];

    int take = 0;
    int notTake = calc(ind + 1, x, arr, dp);
    // if (arr[ind] <= x)
    // {
    take = calc(ind + 1, x - arr[ind], arr, dp);
    // }
    return dp[ind][x] = take + notTake;
}
void solve()
{
    ll i;
    ll n, x;
    cin >> n >> x;
    vl arr(n, 0);
    vector<vector<ll>> dp(n + 1, vector<ll>(x + 1, -1));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << calc(0, x, arr, dp);
}

int main()
{

    solve();

    return 0;
}