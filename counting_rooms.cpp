#include <bits/stdc++.h>
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

void dfs(int x, int y, int n, int m, vector<vector<char>> &grid, vector<vector<int>> &vis)
{
    vis[x][y] = 1;

    for (int i = 0; i < 4; i++)
    {
        int newx = x + dx[i];
        int newy = y + dy[i];

        if (newx >= 0 && newy >= 0 && newx < n && newy < m && !vis[newx][newy] && grid[newx][newy] == '.')
        {
            dfs(newx, newy, n, m, grid, vis);
        }
        // else
        // {
        //     return;
        // }
    }
}

int main()
{

    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m, '.'));
    vector<vector<int>> vis(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                dfs(i, j, n, m, grid, vis);
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}