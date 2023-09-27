// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int solve(int i, int m, vector<int> &arr)
{
    if (i == 1)
    {
        if (arr[i] == 0 || arr[i] == m)
            return 1;
        else
        {
            return 0;
        }
    }
    if (i == 0)
    {
        if (arr[i] != 0 && arr[i] != m)
        {
            return 0;
        }
    }
    else

        return solve(i - 1, m - 1, arr) + solve(i - 1, m, arr) + solve(i - 1, m + 1, arr);
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(n - 1, m, arr);

    return 0;
}