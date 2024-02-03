

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
    ll nn = n + 1;
    // unordered_map<ll, ll> mp;
    // for(auto it:)
    for (ll i = 0; i < n; i++)
    {
        // mp[i] = 1;
        arr[i] = i + 1;
        // if (i % 2 == 0)
        // {
        //     ans.pb(i);
        // }
    }
    ll st = 1;
    while (arr.size() > 1)
    {
        // ll key = (st + 1);
        // if (key > n)
        // {
        //     key -= n;
        // }
        // wile(arr.find(key) != arr.end())
        // {
        //     key++;
        // }
        // cout << key << " ";
        // arr.erase(key);
        // st = key + 1;

        vl temp;
        for (int i = 0; i < arr.size(); i++)
        {
            if (i % 2 == 1)
            {
                cout << arr[i] << " ";
            }
            else
            {
                temp.pb(arr[i]);
            }
        }

        if (arr.size() % 2 == 0)
        {
            arr = temp;
        }
        else
        {
            int ele = temp.back();
            temp.pop_back();
            arr.clear();
            arr.pb(ele);
            for (int i = 0; i < temp.size(); i++)
            {
                arr.pb(temp[i]);
            }
        }

        // st++;
    }
    cout << arr[0] << '\n';
}

int main()
{

    solve();

    return 0;
}
