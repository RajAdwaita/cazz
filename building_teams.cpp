
// #include <bits/stdc++.h>
// using namespace std;
// bool fl = false;
// bool dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &team, int t, int par)
// {
//     vis[node] = 1;
//     team[node] = t;
//     for (auto it : adj[node])
//     {
//         if (it == par)
//             continue;

//         if (team[it] == 0)
//         {
//             if (!dfs(it, adj, vis, team, 3))
//         }
//         if (!vis[it])
//         {

//             if (t == 1)
//             {
//                 if (team[it] == t)
//                 {
//                     fl = true;
//                     team[it] == -1;
//                     return;
//                 }
//                 dfs(it, adj, vis, team, 2);
//             }
//             else
//             {
//                 if (team[it] == t)
//                 {
//                     fl = true;
//                     team[it] == -1;
//                     return;
//                 }
//                 dfs(it, adj, vis, team, 1);
//             }
//         }
//     }
// }

// bool color_all()
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (!visited[i])
//         {
//             if (!dfs(i, 1, -1)) // vertex, color, parent
//                 return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     // nn = n;
//     vector<int> adj[n + 1];
//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<int> vis(n + 1, 0);
//     vector<int> team(n + 1, -1);

//     for (int i = 1; i <= n; i++)
//     {
//         if (!vis[i])
//         {
//             dfs(i, adj, vis, team, 1, -1);
//         }
//     }

//     // for (int i = 1; i <= n; i++)
//     // {
//     if (fl)
//     {
//         cout << "IMPOSSIBLE" << endl;
//     }
//     // }
//     for (int i = 1; i <= n; i++)
//     {
//         cout << team[i] << " ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 3;
vector<bool> visited(N, false);
vector<int> col(N, 0);
vector<int> adj[N];
int n, m;

bool dfs(int u, int c, int par)
{
    visited[u] = true;
    col[u] = c;
    for (auto i : adj[u])
    {
        if (i == par)
            continue;
        if (col[i] == 0)
        {
            if (!dfs(i, c xor 3, u))
            {
                return false;
            }
        }
        if (col[i] == col[u])
            return false;
    }
    return true;
}

bool color_all()
{
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            if (!dfs(i, 1, -1)) // vertex, color, parent
                return false;
        }
    }
    return true;
}

int main()
{
    cin >> n;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool ans = color_all();
    if (ans)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << col[i] << " ";
        }
    }
    else
    {
        puts("IMPOSSIBLE");
    }
    return 0;
}