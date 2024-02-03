

// #include <bits/stdc++.h>
// using namespace std;
// #define gc getchar_unlocked
// #define fo(i, n) for (i = 0; i < n; i++)
// #define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
// #define ll long long int
// #define si(x) scanf("%d", &x)
// #define sl(x) scanf("%lld", &x)
// #define ss(s) scanf("%s", s)
// #define pi(x) printf("%d\n", x)
// #define pl(x) printf("%lld\n", x)
// #define ps(s) printf("%s\n", s)
// #define deb(x) cout << #x << "=" << x << endl
// #define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
// #define pb push_back
// #define mp make_pair
// #define F first
// #define S second
// #define all(x) x.begin(), x.end()
// #define clr(x) memset(x, 0, sizeof(x))
// #define sortall(x) sort(all(x))
// #define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
// #define PI 3.1415926535897932384626
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pl;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef vector<pii> vpii;
// typedef vector<pl> vpl;
// typedef vector<vi> vvi;
// typedef vector<vl> vvl;

// bool static comp(pair<int, int> A, pair<int, int> B)
// {
//     if (A.first == B.first)
//     {
//         return A.second > B.second;
//         // return B.second > A.second
//     }
//     else
//         return A.first < B.first;
// }
// void solve()
// {
//     ll i;
//     ll n;
//     cin >> n;
//     vector<pair<int, int>> vp;
//     vector<int> ans1(n, 0);
//     vector<int> ans2(n, 0);
//     map<pair<int, int>, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         vp.push_back({x, y});
//     }
//     for (int i = 0; i < n; i++)
//     {
//         // mp[vp[i]] = i;
//         mp.insert({{vp[i.first], vp[i].second}, i});
//     }
//     sort(begin(vp), end(vp), comp);
//     for (auto it : vp)
//     {
//         cout << it.first << " " << it.second << '\n';
//     }
//     int maxr = 0;
//     for (int i = 0; i < n; i++)
//     {
//         pair<int, int> &p =
//             if (vp[i].second <= maxr)
//         {
//             ans1[mp[vp[i]]] = 1;
//         }
//         maxr = max(maxr, vp[i].second);
//     }

//     int minr = 1e9;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (vp[i].second >= minr)
//         {
//             ans2[mp[vp[i]]] = 1;
//         }
//         minr = min(minr, vp[i].second);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << ans2[i] << " ";
//     }
//     cout << '\n';
//     for (int i = 0; i < n; i++)
//     {
//         cout << ans1[i] << " ";
//     }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = i + 1; j < n; j++)
//     //     {
//     //         int a = vp[i].first;
//     //         int b = vp[i].second;
//     //         int c = vp[j].first;
//     //         int d = vp[j].second;
//     //         if (a <= c && d <= b)
//     //         {
//     //             ans1[i] = 1;
//     //             ans2[j] = 1;
//     //         }
//     //     }
//     // }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct range
{
    int left, right, index;
    bool operator<(const range &other) const
    {
        if (left == other.left)
            return right > other.right;
        return left < other.left;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<range> ranges(n);
    vector<int> contained(n);
    vector<int> contains(n);
    for (int indx = 0; indx < n; indx++)
    {
        cin >> ranges[indx].left;
        cin >> ranges[indx].right;
        ranges[indx].index = indx;
    }
    sort(ranges.begin(), ranges.end());

    // contained
    int maxend = 0;
    for (int i = 0; i < n; i++)
    {
        if (ranges[i].right <= maxend)
            contained[ranges[i].index]++;
        maxend = max(maxend, ranges[i].right);
    }

    int minend = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        if (ranges[i].right >= minend)
            contains[ranges[i].index]++;
        minend = min(minend, ranges[i].right);
    }

    for (int i = 0; i < n; i++)
    {
        cout << contains[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << contained[i] << " ";
    }
    cout << endl;

    return 0;
}