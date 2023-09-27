#include <bits/stdc++.h>
using namespace std;
bool static comp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
        // cin >> a[i];
    }

    sort(begin(arr), end(arr), comp);
    int ans = 0;
    int c = 1;
    int st = arr[0].first;
    int en = arr[0].second;
    int i = 1;
    while (i < n)
    {
        if (arr[i].first >= en)
        {
            c++;
            st = arr[i].first;
            en = arr[i].second;
        }
        i++;
    }
    cout << c << endl;

    return 0;
}