#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    int ans = INT_MIN;
    int c = 1;
    int i = 1;
    int j = 0;

    while (i < n && j < n)
    {
        if (a[i] <= b[j])
        {
            c++;
            i++;
        }
        else
        {
            c--;
            j++;
        }
        ans = max(ans, c);
    }
    cout << ans << endl;
    return 0;
}