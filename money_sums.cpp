#include <bits/stdc++.h>
using namespace std;

void solve(int ind, int sum, vector<int> &arr, set<int> &ans)
{
    ans.insert(sum);
    if (ind == arr.size())
    {
        ans.insert(sum);
        return;
    }
    // if (sum != 0)

    sum += arr[ind];
    solve(ind + 1, sum, arr, ans);
    sum -= arr[ind];
    solve(ind + 1, sum, arr, ans);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<int> ans;
    int sum = 0;
    sort(begin(arr), end(arr));
    solve(0, sum, arr, ans);
    cout << ans.size() - 1 << endl;
    for (auto it : ans)
    {
        if (it != 0)
            cout << it << " ";
    }
    cout << endl;

    return 0;
}