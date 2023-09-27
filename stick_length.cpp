#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> arr(n, 0);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = 0;
    long long maxEle = -1;
    sort(begin(arr), end(arr));
    // if (n % 2 != 0)
    // {
    maxEle = arr[n / 2];
    // }

    for (auto &it : arr)
    {
        ans = ans + abs(it - maxEle);
    }

    cout << ans << '\n';

    return 0;
}