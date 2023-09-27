
#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<int> &vis)
{
    vis[node] = 1;
    // cout << "NOT: " << node << endl;

    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> bridge;
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            bridge.push_back(i);
            dfs(i, adj, vis);
        }
    }
    cout << bridge.size() - 1 << endl;
    for (int i = 0; i < bridge.size() - 1; i++)
    {
        cout << bridge[i] << " " << bridge[i + 1] << endl;
    }

    return 0;
}