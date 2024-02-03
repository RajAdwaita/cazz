

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

bool static comp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}

void solve()
{
    ll i;
    ll n;
    cin >> n;
    vector<pair<ll, ll>> vp;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        vp.push_back({a, b});
    }
    int rooms = 1;
    sort(begin(vp), end(vp), comp);

    ll st = vp[0].first;
    ll en = vp[0].second;
    vector<ll> ans;

    for (int i = 1; i < n; i++)
    {
        if (vp[i].first > en)
        {
            continue;
        }
        else
        {
            if (rooms == 1)
                rooms++;
            en = vp[i].second;
        }
    }
    cout << rooms;
}

int main()
{

    solve();

    return 0;
}
