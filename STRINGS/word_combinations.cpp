

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

int solve(int ind, string ans, string str, vector<string> &arr)
{
    if (ans == str)
    {
        return 1;
    }
    if (ind == arr.size())
    {
        if (ans == str)
        {
            return 1;
        }
        return 0;
    }
    int notTake = solve(ind + 1, ans, str, arr);
    int take = solve(ind + 1, ans + arr[ind], str, arr);
    // return max(take, notTake);

    return take + notTake;
}

int main()
{

    // solve();
    // ll i;
    string str;
    cin >> str;
    ll k;
    cin >> k;
    vector<string> arr;
    for (int i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        arr.pb(s);
    }

    cout << solve(0, "", str, arr) << '\n';

    return 0;
}
