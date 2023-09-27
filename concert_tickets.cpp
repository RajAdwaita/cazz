#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m, n;
    cin >> n >> m;
    // vector<ll> h(n);
    multiset<ll> h;
    vector<ll> t(m);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        h.insert(x);
        // cin >> h[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t[i];
    }

    // sort(begin(h), end(h));
    // int j = 0;
    // vector<ll> vis(n, 0);
    for (int i = 0; i < m; i++)
    {
        // int ele = t[i];
        // int c = 0;
        // for (int j = 0; j < n; j++)
        // {
        //     if (!vis[j])
        //     {
        //         c++;
        //         if (c == 1 && h[j] > ele)
        //         {
        //             cout << -1 << endl;
        //             c = 0;
        //             break;
        //         }
        //         if (h[j] == ele)
        //         {
        //             cout << h[j] << endl;
        //             vis[j] = 1;
        //             c = 0;
        //             break;
        //         }
        //         if (h[j] < ele)
        //         {
        //             continue;
        //         }
        //         if (h[j] >= ele)
        //         {
        //             cout << h[j - 1] << endl;
        //             vis[j - 1] = 1;
        //             c = 0;
        //             break;
        //         }
        //     }
        // }

        auto it = h.upper_bound(t[i]);
        if (it == h.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            it--;
            cout << *it << endl;
            h.erase(it);
        }
    }

    return 0;
}