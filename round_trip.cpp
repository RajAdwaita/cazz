

#include <bits/stdc++.h>
using namespace std;

int sv = 0, ev = 0;

bool dfs(int node, int p, vector<int> adj[], vector<int> &vis, vector<int> &par)
{
    vis[node] = 1;
    par[node] = p;

    for (auto it : adj[node])
    {
        if (it == p)
            continue;

        if (vis[it])
        {
            sv = it;
            ev = node;
            // return true;
            continue;
        }
        if (!vis[it])
        {
            if (!dfs(it, node, adj, vis, par))
                return false;
        }
    }
    return true;
}
int main()
{
    int n, m;
    cin >> n >> m;
    // cin >> m;
    vector<int> vis(n + 1, 0);
    vector<int> par(n + 1, 0);
    vector<int> adj[n + 1];
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            if (!dfs(i, -1, adj, vis, par))
            {
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }
        }
    }
    // for (auto it : par)
    // {
    //     cout << it << endl;
    // }
    // cout << ev << ": " << sv << endl;
    if (sv == ev)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    vector<int> ans;
    int tv = sv;
    // int xv = sv;
    ans.push_back(sv);
    while (ev != tv)
    {
        // cout << tv << endl;
        ans.push_back(par[tv]);
        tv = par[tv];
    }

    ans.push_back(sv);
    // cout << "Y";

    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
}