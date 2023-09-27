

#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<pair<long long, long long>>> &g, vector<long long> &dist)
{

    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    dist[1] = 0;
    pq.push({0, 1});
    while (!pq.empty())
    {
        long long u = pq.top().second;
        long long d = pq.top().first;
        pq.pop();

        if (dist[u] < d)
            continue;

        for (auto it : g[u])
        {
            long long v = it.first;
            long long c = it.second;

            if (dist[v] <= c + d)
                continue;

            else
            {
                dist[v] = c + d;
                pq.push({dist[v], v});
            }
        }
    }
}
int main()
{
    long long n, m;
    cin >> n >> m;
    // cin >> m;
    vector<vector<pair<long long, long long>>> adj(n + 1);
    vector<long long> dist(n + 1, 1e17);
    for (long long i = 0; i < m; i++)
    {
        long long x, y, z;
        cin >> x >> y >> z;
        g[x].push_back({y, z});
    }
    // for (long long i = 0; i <= n; i++)
    solve(g, dist);

    for (long long i = 1; i <= n; i++)
    {
        cout << dist[i] << " ";
    }
    return 0;
}