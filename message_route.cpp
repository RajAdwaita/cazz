
#include <bits/stdc++.h>
using namespace std;
int nn;
void dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &path)
{
    vis[node] = 1;
    // cout << "NOT: " << node << endl;

    // path.push_back(node);
    // path[node] = 1;
    if (node == nn)
        return;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {

            path[it] = node;
            dfs(it, adj, vis, path);
        }
        // else
    }
    // cout << "HERE : " << node << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    nn = n;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> path(n + 1, -1);
    vector<int> vis(n + 1, 0);
    vector<int> par(n + 1, -1);
    par[1] = 0;
    vis[1] = 1;
    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        for (auto x : adj[it])
        {
            if (!vis[x])
            {
                vis[x] = 1;
                par[x] = it;
                q.push(x);
            }
        }
    }
    stack<int> st;
    int v = n;
    while (v)
    {
        st.push(v);
        v = par[v];
    }
    if (par[n] == -1)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    cout << st.size() << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    // path[1] = 0;
    // dfs(1, adj, vis, path);
    // // cout << path.size() << endl;
    // int xx = n;
    // if (path[n] == -1)
    // {
    //     cout << "IMPOSSIBLE" << endl;
    //     return 0;
    // }
    // vector<int> ans;
    // ans.push_back(xx);
    // while (xx)
    // {
    //     // cout << path[xx] << " ";
    //     int l = path[xx];
    //     if (l == 0)
    //         break;
    //     ans.push_back(path[xx]);
    //     xx = path[xx];
    // }
    // cout << ans.size() << endl;
    // reverse(begin(ans), end(ans));
    // for (auto it : ans)
    // {
    //     cout << it << " ";
    // }
    // return 0;
}