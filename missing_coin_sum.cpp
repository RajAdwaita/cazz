

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

void solve(ll ind, ll summ, vector<ll> &arr, set<ll> &st)
{
    if (ind == arr.size())
    {
        st.insert(summ);
        return;
    }
    solve(ind + 1, summ, arr, st);
    solve(ind + 1, summ + arr[ind], arr, st);
    // ll take = solve(ind)
}
void solve()
{
    ll i;
    ll n;
    cin >> n;
    ll summ = 0;
    vl arr(n);
    fo(i, n)
    {
        cin >> arr[i];
        summ += arr[i];
    }
    set<ll> st;
    sortall(arr);
    solve(0, 0, arr, st);
    int ele = *max_element(begin(st), end(st));
    for (int i = 0; i <= ele; i++)
    {
        if (count(st.begin(), st.end(), i) == 0)
        {
            cout << i << endl;
            return;
        }
    }
    cout << summ + 1 << endl;
}

int main()
{

    solve();

    return 0;
}
