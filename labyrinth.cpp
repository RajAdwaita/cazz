#include <bits/stdc++.h>
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main()
{

    int n, m;
    cin >> n >> m;
    int stx, sty;
    int enx, eny;

    vector<vector<char>> grid(n, vector<char>(m, '.'));
    vector<vector<int>> vis(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                stx = i;
                sty = j;
            }
            if (grid[i][j] == 'B')
            {
                enx = i;
                eny = j;
            }
        }
    }
    // int cnt = 0;
    string ans = "";
    bool fl = false;
    int cnt = 0;
    // for (int i = stx; i < n; i++)
    // {
    //     for (int j = sty; j < m; j++)
    //     {
    //         if (!vis[i][j] && grid[i][j] == '.')
    //         {
    cnt++;
    string dir = "DLUR";
    queue<pair<int, int>> q;
    q.push({stx, sty});
    vis[stx][sty] = 1;

    while (!q.empty())
    {
        auto it = q.front();
        int x = it.first;
        int y = it.second;
        q.pop();
        cout << "X: " << x << " Y: " << y << endl;
        if (grid[x][y] == 'B')
        {
            cout << "YES" << endl;
            return 0;
        }
        for (int k = 0; k < 4; k++)
        {
            int newx = x + dx[k];
            int newy = y + dy[k];
            if (grid[newx][newy] == 'B')
            {
                cout << "YES" << endl;
                cout << cnt << endl;
                cout << ans << endl;
                return 0;
            }

            if (newx >= 0 && newy >= 0 && newx < n && newy < m && !vis[newx][newy] && grid[newx][newy] == '.')
            {
                vis[newx][newy] = 1;
                ans += dir[k];
                cnt++;
                q.push({newx, newy});
            }
            // ans.pop_back();
            // cnt--;
        }
    }
    if (fl)
    {
        cout << "YES" << endl;
    }
    // dfs(i, j, n, m, grid, vis);
    // cnt++;
    // }
    // }
    // }

    cout << "NO" << endl;

    return 0;
}