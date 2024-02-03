

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

void solve()
{
    ll i;
    ll n;
    cin >> n;
    vl arr(n);
    fo(i, n)
    {
        cin >> arr[i];
    }
    ll ans = 0;
    ll cnt = 0;
    ll l = 0, r = 0;
    unordered_map<ll, ll> mp;
    // vector<int>pos(
    unordered_map<ll, ll> pos;
    // )
    // while (r < n)
    // {
    //     if (mp.find(arr[r]) != mp.end())
    //     {
    //         l = max(mp[arr[r]] + 1, l);
    //     }
    //     mp[arr[r]] = r;

    //     ans = max(ans, r - l + 1);
    //     r++;
    // mp[arr[r]]++;
    // // cnt++;

    // if (mp[arr[r]] > 1)
    // {
    //     l = pos[arr[r]] + 1;
    //     ans = max(ans, r - l + 1);
    //     mp[arr[r]] = 1;
    // }
    // pos[arr[r]] = r;
    // ans = max(ans, r - l + 1);
    // r++;
    // }
    set<ll> st;
    while (l < n && r < n)
    {
        while (r < n && !st.count(arr[r]))
        {
            st.insert(arr[r]);
            ans = max(ans, r - l + 1);
            r++;
        }

        while (r < n && st.count(arr[r]))
        {
            st.erase(arr[l]);
            l++;
        }
    }
    cout << ans << '\n';
}

int main()
{

    solve();

    return 0;
}
