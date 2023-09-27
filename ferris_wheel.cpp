#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(begin(arr), end(arr), greater<int>());
    long long int temp = 0;
    long long int ans = 0;
    long long int summ = 0;
    long long int i = 0;
    long long int j = n - 1;
    while (i <= j)
    {
        if (arr[i] + arr[j] <= x)
        {
            ans++;
            j--;
        }
        else
        {
            ans++;
        }
        i++;
    }

    cout << ans << endl;

    return 0;
}