#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    sort(begin(a), end(a));
    sort(begin(b), end(b));

    int i = 0;
    int j = 0;
    int c = 0;
    while (i < n && j < m)
    {
        if (a[i] >= b[j] - k && a[i] <= b[j] + k)
        {
            // cout << a[i] << " " << b[j] << endl;
            c++;
            i++;
            j++;
        }

        if (a[i] < b[j] - k)
        {
            i++;
        }
        if (a[i] > b[j] + k)
        {
            j++;
        }
    }
    cout << c << endl;

    return 0;
}