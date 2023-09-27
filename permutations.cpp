#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 2 && n < 4)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    if (n == 4)
    {
        cout << "2 4 1 3" << endl;
        return 0;
    }
    vector<int> ans(n, 0);
    int k = 0;
    int i = 1;
    while (i <= n && k < n)
    {
        ans[k] = i;
        i++;
        k += 2;
    }
    k = 1;
    while (i <= n && k < n)
    {
        ans[k] = i;
        i++;
        k += 2;
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}